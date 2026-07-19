/* Function at 0x807A32A0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807A32A0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 4 */ // 0x807A32AC
    *(0xc + r1) = r31; // stw @ 0x807A32B0
    r31 = r3;
    *(8 + r3) = r0; // stw @ 0x807A32B8
    r12 = *(0 + r3); // lwz @ 0x807A32BC
    r12 = *(0x2c + r12); // lwz @ 0x807A32C0
    /* mtctr r12 */ // 0x807A32C4
    /* bctrl  */ // 0x807A32C8
    r0 = *(0xc + r31); // lbz @ 0x807A32CC
    if (==) goto 0x0x807a32e4;
    /* lis r3, 0 */ // 0x807A32D8
    r3 = *(0 + r3); // lwz @ 0x807A32DC
    FUN_807A9CC4(r3); // bl 0x807A9CC4
    r0 = *(0x14 + r1); // lwz @ 0x807A32E4
    r31 = *(0xc + r1); // lwz @ 0x807A32E8
    return;
}