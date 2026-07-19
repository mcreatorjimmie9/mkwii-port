/* Function at 0x806369E4, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806369E4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806369F4
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x806369FC
    r12 = *(0x14 + r12); // lwz @ 0x80636A00
    /* mtctr r12 */ // 0x80636A04
    /* bctrl  */ // 0x80636A08
    FUN_805A6900(); // bl 0x805A6900
    /* lis r4, 0 */ // 0x80636A10
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x80636A18
    FUN_8078AF68(r4); // bl 0x8078AF68
    if (==) goto 0x0x80636a30;
    *(8 + r30) = r31; // stw @ 0x80636A28
    /* b 0x80636a44 */ // 0x80636A2C
    /* li r0, 1 */ // 0x80636A30
    *(0xc8 + r30) = r0; // stb @ 0x80636A34
    /* lis r3, 0 */ // 0x80636A38
    r3 = *(0 + r3); // lwz @ 0x80636A3C
    *(0x24 + r3) = r0; // stb @ 0x80636A40
    r0 = *(0x14 + r1); // lwz @ 0x80636A44
    r31 = *(0xc + r1); // lwz @ 0x80636A48
    r30 = *(8 + r1); // lwz @ 0x80636A4C
    return;
}