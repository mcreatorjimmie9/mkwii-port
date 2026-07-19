/* Function at 0x8070149C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8070149C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807014A8
    r31 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x807014B0
    if (==) goto 0x0x807014f0;
    r3 = *(0x758c + r3); // lwz @ 0x807014BC
    r12 = *(0x18 + r3); // lwz @ 0x807014C0
    r12 = *(0x10 + r12); // lwz @ 0x807014C4
    /* mtctr r12 */ // 0x807014C8
    /* bctrl  */ // 0x807014CC
    if (!=) goto 0x0x807014e4;
    /* li r0, 0 */ // 0x807014D8
    *(0x20 + r31) = r0; // stb @ 0x807014DC
    /* b 0x807014f0 */ // 0x807014E0
    r3 = *(0x758c + r31); // lwz @ 0x807014E4
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x807014f4 */ // 0x807014EC
    /* li r3, 0 */ // 0x807014F0
    r0 = *(0x14 + r1); // lwz @ 0x807014F4
    r31 = *(0xc + r1); // lwz @ 0x807014F8
}