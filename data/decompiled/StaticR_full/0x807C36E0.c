/* Function at 0x807C36E0, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807C36E0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807C36EC
    r31 = r3;
    FUN_807C02E4(); // bl 0x807C02E4
    if (==) goto 0x0x807c37c0;
    /* lis r4, 0 */ // 0x807C3700
    /* lbzu r11, 0(r4) */ // 0x807C3704
    /* lis r7, 0 */ // 0x807C3708
    /* lbzu r6, 0(r7) */ // 0x807C370C
    r3 = *(4 + r31); // lwz @ 0x807C3710
    r10 = *(1 + r4); // lbz @ 0x807C3714
    r9 = *(2 + r4); // lbz @ 0x807C3718
    r8 = *(3 + r4); // lbz @ 0x807C371C
    r5 = *(1 + r7); // lbz @ 0x807C3720
    r4 = *(2 + r7); // lbz @ 0x807C3724
    r0 = *(3 + r7); // lbz @ 0x807C3728
    *(0xc + r1) = r11; // stb @ 0x807C372C
    r3 = *(0 + r3); // lwz @ 0x807C3730
    *(0xd + r1) = r10; // stb @ 0x807C3734
    *(0xe + r1) = r9; // stb @ 0x807C3738
    *(0xf + r1) = r8; // stb @ 0x807C373C
    *(8 + r1) = r6; // stb @ 0x807C3740
    *(9 + r1) = r5; // stb @ 0x807C3744
    *(0xa + r1) = r4; // stb @ 0x807C3748
    *(0xb + r1) = r0; // stb @ 0x807C374C
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x807C3754
    /* lis r3, 0 */ // 0x807C3758
    /* mulli r0, r0, 0xf0 */ // 0x807C375C
    r3 = *(0 + r3); // lwz @ 0x807C3760
    r3 = r3 + r0; // 0x807C3764
    r0 = *(0xf4 + r3); // lwz @ 0x807C3768
    if (!=) goto 0x0x807c3798;
    r5 = *(0xc + r1); // lbz @ 0x807C3774
    r4 = *(0xd + r1); // lbz @ 0x807C3778
    r3 = *(0xe + r1); // lbz @ 0x807C377C
    r0 = *(0xf + r1); // lbz @ 0x807C3780
    *(0x10 + r1) = r5; // stb @ 0x807C3784
    *(0x11 + r1) = r4; // stb @ 0x807C3788
    *(0x12 + r1) = r3; // stb @ 0x807C378C
    *(0x13 + r1) = r0; // stb @ 0x807C3790
    /* b 0x807c37b8 */ // 0x807C3794
    r5 = *(8 + r1); // lbz @ 0x807C3798
    r4 = *(9 + r1); // lbz @ 0x807C379C
    r3 = *(0xa + r1); // lbz @ 0x807C37A0
    r0 = *(0xb + r1); // lbz @ 0x807C37A4
    *(0x10 + r1) = r5; // stb @ 0x807C37A8
    *(0x11 + r1) = r4; // stb @ 0x807C37AC
    *(0x12 + r1) = r3; // stb @ 0x807C37B0
    *(0x13 + r1) = r0; // stb @ 0x807C37B4
    r3 = *(0x10 + r1); // lwz @ 0x807C37B8
    /* b 0x807c37d4 */ // 0x807C37BC
    r3 = *(8 + r31); // lwz @ 0x807C37C0
    r12 = *(0 + r3); // lwz @ 0x807C37C4
    r12 = *(0x30 + r12); // lwz @ 0x807C37C8
    /* mtctr r12 */ // 0x807C37CC
    /* bctrl  */ // 0x807C37D0
    r0 = *(0x24 + r1); // lwz @ 0x807C37D4
    r31 = *(0x1c + r1); // lwz @ 0x807C37D8
    return;
}