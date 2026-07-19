/* Function at 0x805E33E8, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805E33E8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805E33F4
    /* lis r31, 0 */ // 0x805E33F8
    r31 = r31 + 0; // 0x805E33FC
    /* b 0x805e3410 */ // 0x805E3400
    /* mtctr r12 */ // 0x805E3404
    /* bctrl  */ // 0x805E3408
    r31 = r31 + 4; // 0x805E340C
    r12 = *(0 + r31); // lwz @ 0x805E3410
    if (!=) goto 0x0x805e3404;
    r0 = *(0x14 + r1); // lwz @ 0x805E341C
    r31 = *(0xc + r1); // lwz @ 0x805E3420
    return;
}