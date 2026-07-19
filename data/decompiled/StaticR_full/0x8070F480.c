/* Function at 0x8070F480, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8070F480(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8070F490
    *(8 + r1) = r30; // stw @ 0x8070F494
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x8070F49C
    r12 = *(0x30 + r12); // lwz @ 0x8070F4A0
    /* mtctr r12 */ // 0x8070F4A4
    /* bctrl  */ // 0x8070F4A8
    /* lis r4, 0x101 */ // 0x8070F4AC
    r0 = *(0x20 + r3); // lwz @ 0x8070F4B0
    r3 = r4 + 0x101; // 0x8070F4B4
    /* andc. r0, r3, r0 */ // 0x8070F4B8
    if (!=) goto 0x0x8070f4d8;
    /* lis r3, 0 */ // 0x8070F4C0
    r3 = *(0 + r3); // lwz @ 0x8070F4C4
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x8070f4d8;
    /* li r31, 1 */ // 0x8070F4D4
    r3 = *(0x15c + r30); // lwz @ 0x8070F4D8
    *(0x1c5 + r30) = r31; // stb @ 0x8070F4DC
    *(0xbd + r3) = r31; // stb @ 0x8070F4E0
    r31 = *(0xc + r1); // lwz @ 0x8070F4E4
    r30 = *(8 + r1); // lwz @ 0x8070F4E8
    r0 = *(0x14 + r1); // lwz @ 0x8070F4EC
    return;
}