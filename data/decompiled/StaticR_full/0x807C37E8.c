/* Function at 0x807C37E8, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807C37E8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807C37F4
    r31 = r3;
    FUN_807C02E4(); // bl 0x807C02E4
    if (==) goto 0x0x807c3820;
    r3 = *(8 + r31); // lwz @ 0x807C3808
    r12 = *(0 + r3); // lwz @ 0x807C380C
    r12 = *(0x34 + r12); // lwz @ 0x807C3810
    /* mtctr r12 */ // 0x807C3814
    /* bctrl  */ // 0x807C3818
    /* b 0x807c3828 */ // 0x807C381C
    /* lis r3, 0 */ // 0x807C3820
    /* lfs f1, 0(r3) */ // 0x807C3824
    r0 = *(0x14 + r1); // lwz @ 0x807C3828
    r31 = *(0xc + r1); // lwz @ 0x807C382C
    return;
}