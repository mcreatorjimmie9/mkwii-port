/* Function at 0x807A2A00, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807A2A00(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 4 */ // 0x807A2A0C
    *(0xc + r1) = r31; // stw @ 0x807A2A10
    r31 = r3;
    *(8 + r3) = r0; // stw @ 0x807A2A18
    r12 = *(0 + r3); // lwz @ 0x807A2A1C
    r12 = *(0x2c + r12); // lwz @ 0x807A2A20
    /* mtctr r12 */ // 0x807A2A24
    /* bctrl  */ // 0x807A2A28
    r0 = *(0xc + r31); // lbz @ 0x807A2A2C
    if (==) goto 0x0x807a2a44;
    /* lis r3, 0 */ // 0x807A2A38
    r3 = *(0 + r3); // lwz @ 0x807A2A3C
    FUN_807A9CC4(r3); // bl 0x807A9CC4
    /* lis r3, 0 */ // 0x807A2A44
    r3 = *(0 + r3); // lwz @ 0x807A2A48
    FUN_8079D1A8(r3, r3); // bl 0x8079D1A8
    FUN_8079CB1C(r3); // bl 0x8079CB1C
    r0 = *(0x14 + r1); // lwz @ 0x807A2A54
    r31 = *(0xc + r1); // lwz @ 0x807A2A58
    return;
}