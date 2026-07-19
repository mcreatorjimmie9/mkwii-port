/* Function at 0x807E65B4, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807E65B4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807E65C0
    r31 = r3;
    r0 = *(0xc4 + r3); // lwz @ 0x807E65C8
    /* addic. r0, r0, -1 */ // 0x807E65CC
    *(0xc4 + r3) = r0; // stw @ 0x807E65D0
    if (!=) goto 0x0x807e6618;
    /* li r0, 4 */ // 0x807E65D8
    *(0xb4 + r3) = r0; // stw @ 0x807E65DC
    r3 = *(8 + r3); // lwz @ 0x807E65E0
    /* li r4, 3 */ // 0x807E65E4
    r3 = *(0x28 + r3); // lwz @ 0x807E65E8
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807E65F0
    r12 = *(8 + r12); // lwz @ 0x807E65F4
    /* mtctr r12 */ // 0x807E65F8
    /* bctrl  */ // 0x807E65FC
    r5 = *(8 + r31); // lwz @ 0x807E6600
    /* lis r3, 0 */ // 0x807E6604
    /* lfs f2, 0(r3) */ // 0x807E6608
    /* li r4, 0 */ // 0x807E660C
    r3 = *(0x28 + r5); // lwz @ 0x807E6610
    FUN_805E70EC(r3, r4); // bl 0x805E70EC
    r0 = *(0x14 + r1); // lwz @ 0x807E6618
    r31 = *(0xc + r1); // lwz @ 0x807E661C
    return;
}