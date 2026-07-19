/* Function at 0x807A2178, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807A2178(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 4 */ // 0x807A2184
    *(0xc + r1) = r31; // stw @ 0x807A2188
    r31 = r3;
    *(8 + r3) = r0; // stw @ 0x807A2190
    r12 = *(0 + r3); // lwz @ 0x807A2194
    r12 = *(0x2c + r12); // lwz @ 0x807A2198
    /* mtctr r12 */ // 0x807A219C
    /* bctrl  */ // 0x807A21A0
    r0 = *(0xc + r31); // lbz @ 0x807A21A4
    if (==) goto 0x0x807a21bc;
    /* lis r3, 0 */ // 0x807A21B0
    r3 = *(0 + r3); // lwz @ 0x807A21B4
    FUN_807A9CC4(r3); // bl 0x807A9CC4
    r0 = *(0x14 + r1); // lwz @ 0x807A21BC
    r31 = *(0xc + r1); // lwz @ 0x807A21C0
    return;
}