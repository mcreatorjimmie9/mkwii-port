/* Function at 0x807F35D4, size=300 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807F35D4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807F35E8
    r0 = *(0xb4 + r3); // lwz @ 0x807F35EC
    if (>=) goto 0x0x807f36e8;
    /* li r0, 0 */ // 0x807F35F8
    *(0xb0 + r3) = r0; // stw @ 0x807F35FC
    /* lis r4, 0 */ // 0x807F3600
    r4 = *(0 + r4); // lwz @ 0x807F3604
    r0 = *(0x55 + r4); // lbz @ 0x807F3608
    if (==) goto 0x0x807f3624;
    /* lis r4, 0 */ // 0x807F3614
    r0 = *(0 + r4); // lwz @ 0x807F3618
    *(0xb4 + r3) = r0; // stw @ 0x807F361C
    /* b 0x807f3630 */ // 0x807F3620
    /* lis r4, 0 */ // 0x807F3624
    r0 = *(0 + r4); // lwz @ 0x807F3628
    *(0xb4 + r3) = r0; // stw @ 0x807F362C
    r4 = *(8 + r3); // lwz @ 0x807F3630
    /* lis r3, 0 */ // 0x807F3634
    /* lis r5, 0 */ // 0x807F3638
    /* lfs f1, 0(r3) */ // 0x807F363C
    r3 = *(0x28 + r4); // lwz @ 0x807F3640
    /* li r4, 1 */ // 0x807F3644
    /* lfs f2, 0(r5) */ // 0x807F3648
    /* li r5, 1 */ // 0x807F364C
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r12 = *(0 + r31); // lwz @ 0x807F3654
    r3 = r31;
    /* li r30, 0 */ // 0x807F365C
    r12 = *(0x30 + r12); // lwz @ 0x807F3660
    /* mtctr r12 */ // 0x807F3664
    /* bctrl  */ // 0x807F3668
    /* lis r4, 0x101 */ // 0x807F366C
    r0 = *(0x20 + r3); // lwz @ 0x807F3670
    r3 = r4 + 0x101; // 0x807F3674
    /* andc. r0, r3, r0 */ // 0x807F3678
    if (!=) goto 0x0x807f3698;
    /* lis r3, 0 */ // 0x807F3680
    r3 = *(0 + r3); // lwz @ 0x807F3684
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807f3698;
    /* li r30, 1 */ // 0x807F3694
    if (!=) goto 0x0x807f36e8;
    r3 = *(0xb8 + r31); // lwz @ 0x807F36A0
    r12 = *(0 + r3); // lwz @ 0x807F36A4
    r12 = *(0xc + r12); // lwz @ 0x807F36A8
    /* mtctr r12 */ // 0x807F36AC
    /* bctrl  */ // 0x807F36B0
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xb8 + r31); // lwz @ 0x807F36BC
    r4 = r31 + 0x58; // 0x807F36C0
    r12 = *(0 + r3); // lwz @ 0x807F36C4
    r12 = *(0x78 + r12); // lwz @ 0x807F36C8
    /* mtctr r12 */ // 0x807F36CC
    /* bctrl  */ // 0x807F36D0
    r3 = *(0xb8 + r31); // lwz @ 0x807F36D4
    r12 = *(0 + r3); // lwz @ 0x807F36D8
    r12 = *(0x80 + r12); // lwz @ 0x807F36DC
    /* mtctr r12 */ // 0x807F36E0
    /* bctrl  */ // 0x807F36E4
    r0 = *(0x14 + r1); // lwz @ 0x807F36E8
    r31 = *(0xc + r1); // lwz @ 0x807F36EC
    r30 = *(8 + r1); // lwz @ 0x807F36F0
    return;
}