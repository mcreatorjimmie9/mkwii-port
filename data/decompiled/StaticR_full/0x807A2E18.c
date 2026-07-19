/* Function at 0x807A2E18, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807A2E18(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 4 */ // 0x807A2E24
    *(0xc + r1) = r31; // stw @ 0x807A2E28
    r31 = r3;
    *(8 + r3) = r0; // stw @ 0x807A2E30
    r12 = *(0 + r3); // lwz @ 0x807A2E34
    r12 = *(0x2c + r12); // lwz @ 0x807A2E38
    /* mtctr r12 */ // 0x807A2E3C
    /* bctrl  */ // 0x807A2E40
    r0 = *(0xc + r31); // lbz @ 0x807A2E44
    if (==) goto 0x0x807a2e5c;
    /* lis r3, 0 */ // 0x807A2E50
    r3 = *(0 + r3); // lwz @ 0x807A2E54
    FUN_807A9CC4(r3); // bl 0x807A9CC4
    r0 = *(0x14 + r1); // lwz @ 0x807A2E5C
    r31 = *(0xc + r1); // lwz @ 0x807A2E60
    return;
}