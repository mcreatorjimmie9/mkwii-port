/* Function at 0x808B4674, size=468 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_808B4674(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* stfd f31, 0x28(r1) */ // 0x808B4680
    /* stmw r26, 0x10(r1) */ // 0x808B4684
    r31 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r3 = r7;
    FUN_8064A384(r3); // bl 0x8064A384
    /* lis r3, 0 */ // 0x808B46A0
    /* fmr f31, f1 */ // 0x808B46A4
    r3 = *(0 + r3); // lwz @ 0x808B46A8
    r3 = *(0 + r3); // lwz @ 0x808B46AC
    r29 = *(0x14c + r3); // lwz @ 0x808B46B0
    if (!=) goto 0x0x808b46c4;
    /* li r29, 0 */ // 0x808B46BC
    /* b 0x808b4718 */ // 0x808B46C0
    /* lis r30, 0 */ // 0x808B46C4
    r30 = r30 + 0; // 0x808B46C8
    if (==) goto 0x0x808b4714;
    r12 = *(0 + r29); // lwz @ 0x808B46D0
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808B46D8
    /* mtctr r12 */ // 0x808B46DC
    /* bctrl  */ // 0x808B46E0
    /* b 0x808b46fc */ // 0x808B46E4
    if (!=) goto 0x0x808b46f8;
    /* li r0, 1 */ // 0x808B46F0
    /* b 0x808b4708 */ // 0x808B46F4
    r3 = *(0 + r3); // lwz @ 0x808B46F8
    if (!=) goto 0x0x808b46e8;
    /* li r0, 0 */ // 0x808B4704
    if (==) goto 0x0x808b4714;
    /* b 0x808b4718 */ // 0x808B4710
    /* li r29, 0 */ // 0x808B4714
    r12 = *(0 + r29); // lwz @ 0x808B4718
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808B4720
    /* mtctr r12 */ // 0x808B4724
    /* bctrl  */ // 0x808B4728
    r12 = *(0 + r31); // lwz @ 0x808B472C
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808B4734
    /* mtctr r12 */ // 0x808B4738
    /* bctrl  */ // 0x808B473C
    *(0x1a0 + r29) = r3; // stw @ 0x808B4740
    r3 = r29;
    r4 = r26;
    r5 = r27;
    r12 = *(0 + r29); // lwz @ 0x808B4750
    r12 = *(0x68 + r12); // lwz @ 0x808B4754
    /* mtctr r12 */ // 0x808B4758
    /* bctrl  */ // 0x808B475C
    /* li r0, -1 */ // 0x808B4760
    *(0x604 + r29) = r0; // stw @ 0x808B4764
    r4 = r31 + 0x3fc; // 0x808B4768
    /* lis r3, 0 */ // 0x808B476C
    *(0x3f0 + r31) = r28; // stw @ 0x808B4770
    /* li r0, 0x51 */ // 0x808B4774
    *(0x188 + r29) = r4; // stw @ 0x808B4778
    *(0x3e8 + r31) = r0; // stw @ 0x808B477C
    r3 = *(0 + r3); // lwz @ 0x808B4780
    r3 = *(0 + r3); // lwz @ 0x808B4784
    r29 = *(0x14c + r3); // lwz @ 0x808B4788
    if (!=) goto 0x0x808b479c;
    /* li r29, 0 */ // 0x808B4794
    /* b 0x808b47f0 */ // 0x808B4798
    /* lis r30, 0 */ // 0x808B479C
    r30 = r30 + 0; // 0x808B47A0
    if (==) goto 0x0x808b47ec;
    r12 = *(0 + r29); // lwz @ 0x808B47A8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808B47B0
    /* mtctr r12 */ // 0x808B47B4
    /* bctrl  */ // 0x808B47B8
    /* b 0x808b47d4 */ // 0x808B47BC
    if (!=) goto 0x0x808b47d0;
    /* li r0, 1 */ // 0x808B47C8
    /* b 0x808b47e0 */ // 0x808B47CC
    r3 = *(0 + r3); // lwz @ 0x808B47D0
    if (!=) goto 0x0x808b47c0;
    /* li r0, 0 */ // 0x808B47DC
    if (==) goto 0x0x808b47ec;
    /* b 0x808b47f0 */ // 0x808B47E8
    /* li r29, 0 */ // 0x808B47EC
    if (==) goto 0x0x808b4800;
    r0 = *(4 + r31); // lwz @ 0x808B47F8
    *(0x3ec + r29) = r0; // stw @ 0x808B47FC
    r0 = *(0x42c + r31); // lbz @ 0x808B4800
    if (!=) goto 0x0x808b4830;
    r0 = *(8 + r31); // lwz @ 0x808B480C
    if (!=) goto 0x0x808b4830;
    /* fmr f1, f31 */ // 0x808B4818
    r3 = r31;
    /* li r4, 0 */ // 0x808B4820
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 1 */ // 0x808B4828
    *(0x42c + r31) = r0; // stb @ 0x808B482C
    /* lfd f31, 0x28(r1) */ // 0x808B4830
    r0 = *(0x34 + r1); // lwz @ 0x808B4838
    return;
}