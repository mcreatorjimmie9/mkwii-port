/* Function at 0x805E339C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805E339C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805E33A8
    /* lis r31, 0 */ // 0x805E33AC
    r31 = r31 + 0; // 0x805E33B0
    /* b 0x805e33c4 */ // 0x805E33B4
    /* mtctr r12 */ // 0x805E33B8
    /* bctrl  */ // 0x805E33BC
    r31 = r31 + 4; // 0x805E33C0
    r12 = *(0 + r31); // lwz @ 0x805E33C4
    if (!=) goto 0x0x805e33b8;
    FUN_805D2674(); // bl 0x805D2674
    r0 = *(0x14 + r1); // lwz @ 0x805E33D4
    r31 = *(0xc + r1); // lwz @ 0x805E33D8
    return;
}