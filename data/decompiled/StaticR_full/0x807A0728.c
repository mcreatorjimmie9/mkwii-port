/* Function at 0x807A0728, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807A0728(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 4 */ // 0x807A0734
    *(0xc + r1) = r31; // stw @ 0x807A0738
    r31 = r3;
    *(8 + r3) = r0; // stw @ 0x807A0740
    r12 = *(0 + r3); // lwz @ 0x807A0744
    r12 = *(0x2c + r12); // lwz @ 0x807A0748
    /* mtctr r12 */ // 0x807A074C
    /* bctrl  */ // 0x807A0750
    r0 = *(0xc + r31); // lbz @ 0x807A0754
    if (==) goto 0x0x807a076c;
    /* lis r3, 0 */ // 0x807A0760
    r3 = *(0 + r3); // lwz @ 0x807A0764
    FUN_807A9CC4(r3); // bl 0x807A9CC4
    r0 = *(0x14 + r1); // lwz @ 0x807A076C
    r31 = *(0xc + r1); // lwz @ 0x807A0770
    return;
}