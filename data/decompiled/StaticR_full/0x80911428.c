/* Function at 0x80911428, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80911428(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80911430
    *(0x14 + r1) = r0; // stw @ 0x80911434
    *(0xc + r1) = r31; // stw @ 0x80911438
    r31 = r3;
    /* lfs f0, 0(r4) */ // 0x80911440
    /* li r4, 0 */ // 0x80911444
    /* stfs f0, 0xb4(r3) */ // 0x80911448
    r12 = *(0 + r3); // lwz @ 0x8091144C
    r12 = *(0x68 + r12); // lwz @ 0x80911450
    /* mtctr r12 */ // 0x80911454
    /* bctrl  */ // 0x80911458
    /* li r0, 1 */ // 0x8091145C
    *(0x185 + r31) = r0; // stb @ 0x80911460
    r31 = *(0xc + r1); // lwz @ 0x80911464
    r0 = *(0x14 + r1); // lwz @ 0x80911468
    return;
}