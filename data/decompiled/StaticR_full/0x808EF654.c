/* Function at 0x808EF654, size=488 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_808EF654(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    *(0xfc + r1) = r31; // stw @ 0x808EF660
    /* lis r31, 0 */ // 0x808EF664
    r3 = *(0 + r31); // lwz @ 0x808EF668
    r0 = *(0xb70 + r3); // lwz @ 0x808EF66C
    if (!=) goto 0x0x808ef680;
    /* li r3, 0x27 */ // 0x808EF678
    /* b 0x808ef830 */ // 0x808EF67C
    /* lis r3, 0 */ // 0x808EF680
    r3 = *(0 + r3); // lwz @ 0x808EF684
    r3 = *(0x98 + r3); // lwz @ 0x808EF688
    r0 = *(0x3c4 + r3); // lwz @ 0x808EF68C
    if (<) goto 0x0x808ef82c;
    if (>) goto 0x0x808ef82c;
    /* lis r3, 0 */ // 0x808EF6A0
    r3 = *(0 + r3); // lwz @ 0x808EF6A4
    FUN_8070319C(r3); // bl 0x8070319C
    if (>=) goto 0x0x808ef82c;
    FUN_805ABE9C(r3); // bl 0x805ABE9C
    r4 = *(0 + r31); // lwz @ 0x808EF6BC
    r4 = *(0xc0c + r4); // lwz @ 0x808EF6C4
    FUN_805AC3BC(r3, r3); // bl 0x805AC3BC
    r0 = *(0x20 + r1); // lbz @ 0x808EF6CC
    /* li r3, 0 */ // 0x808EF6D0
    if (==) goto 0x0x808ef6ec;
    r0 = *(0xf4 + r1); // lwz @ 0x808EF6DC
    if (==) goto 0x0x808ef6ec;
    /* li r3, 1 */ // 0x808EF6E8
    if (==) goto 0x0x808ef814;
    r8 = *(0xc8 + r1); // lhz @ 0x808EF6F4
    /* lis r9, 0 */ // 0x808EF6F8
    /* li r0, 0 */ // 0x808EF6FC
    r7 = *(0xca + r1); // lbz @ 0x808EF700
    r9 = r9 + 0; // 0x808EF704
    r6 = *(0xcc + r1); // lhz @ 0x808EF708
    r5 = *(0xce + r1); // lbz @ 0x808EF70C
    /* lis r3, 0 */ // 0x808EF710
    *(0x14 + r1) = r9; // stw @ 0x808EF714
    /* li r4, 0 */ // 0x808EF718
    r3 = *(0 + r3); // lwz @ 0x808EF71C
    *(0x18 + r1) = r8; // sth @ 0x808EF720
    *(0x1a + r1) = r7; // stb @ 0x808EF724
    *(0x1c + r1) = r6; // sth @ 0x808EF728
    *(0x1e + r1) = r5; // stb @ 0x808EF72C
    *(8 + r1) = r9; // stw @ 0x808EF730
    *(0x12 + r1) = r0; // stb @ 0x808EF734
    *(0xc + r1) = r0; // sth @ 0x808EF738
    *(0xe + r1) = r0; // stb @ 0x808EF73C
    *(0x10 + r1) = r0; // sth @ 0x808EF740
    FUN_805C14C8(); // bl 0x805C14C8
    /* lis r4, 0 */ // 0x808EF748
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x808EF750
    r3 = *(0xc + r3); // lwz @ 0x808EF754
    /* lwzx r3, r3, r0 */ // 0x808EF758
    r3 = *(0x40 + r3); // lwz @ 0x808EF75C
    r0 = *(0xa + r3); // lbz @ 0x808EF760
    r5 = *(4 + r3); // lhz @ 0x808EF764
    r4 = *(6 + r3); // lbz @ 0x808EF768
    r3 = *(8 + r3); // lhz @ 0x808EF770
    *(0xc + r1) = r5; // sth @ 0x808EF774
    *(0xe + r1) = r4; // stb @ 0x808EF778
    *(0x10 + r1) = r3; // sth @ 0x808EF77C
    *(0x12 + r1) = r0; // stb @ 0x808EF780
    if (!=) goto 0x0x808ef790;
    /* li r0, 0 */ // 0x808EF788
    /* b 0x808ef7ec */ // 0x808EF78C
    r0 = *(0x1e + r1); // lbz @ 0x808EF790
    if (!=) goto 0x0x808ef7a4;
    /* li r0, 1 */ // 0x808EF79C
    /* b 0x808ef7ec */ // 0x808EF7A0
    r0 = *(0x18 + r1); // lhz @ 0x808EF7A4
    if (>=) goto 0x0x808ef7b8;
    /* li r0, 1 */ // 0x808EF7B0
    /* b 0x808ef7ec */ // 0x808EF7B4
    if (!=) goto 0x0x808ef7e8;
    r0 = *(0x1a + r1); // lbz @ 0x808EF7BC
    if (>=) goto 0x0x808ef7d0;
    /* li r0, 1 */ // 0x808EF7C8
    /* b 0x808ef7ec */ // 0x808EF7CC
    if (!=) goto 0x0x808ef7e8;
    r0 = *(0x1c + r1); // lhz @ 0x808EF7D4
    if (>=) goto 0x0x808ef7e8;
    /* li r0, 1 */ // 0x808EF7E0
    /* b 0x808ef7ec */ // 0x808EF7E4
    /* li r0, 0 */ // 0x808EF7E8
    if (==) goto 0x0x808ef814;
    /* lis r4, 0 */ // 0x808EF7F4
    r4 = r4 + 0; // 0x808EF7FC
    /* li r5, 0xc */ // 0x808EF800
    /* li r6, 5 */ // 0x808EF804
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* li r3, 0x29 */ // 0x808EF80C
    /* b 0x808ef830 */ // 0x808EF810
    /* lis r4, 0 */ // 0x808EF814
    r4 = r4 + 0; // 0x808EF81C
    /* li r5, 0xc */ // 0x808EF820
    /* li r6, 5 */ // 0x808EF824
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* li r3, 0x21 */ // 0x808EF82C
    r0 = *(0x104 + r1); // lwz @ 0x808EF830
    r31 = *(0xfc + r1); // lwz @ 0x808EF834
}