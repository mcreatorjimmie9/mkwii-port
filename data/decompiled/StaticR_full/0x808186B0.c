/* Function at 0x808186B0, size=356 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_808186B0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808186B8
    *(0x104 + r1) = r0; // stw @ 0x808186BC
    *(0xfc + r1) = r31; // stw @ 0x808186C0
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x808186C8
    r4 = r31;
    FUN_8061D97C(r4); // bl 0x8061D97C
    FUN_8061DEF4(r4); // bl 0x8061DEF4
    if (==) goto 0x0x808186e8;
    /* li r3, 1 */ // 0x808186E0
    /* b 0x80818804 */ // 0x808186E4
    /* lis r3, 0 */ // 0x808186E8
    /* li r7, 0 */ // 0x808186EC
    r3 = *(0 + r3); // lwz @ 0x808186F0
    /* lis r8, 0 */ // 0x808186F4
    r8 = r8 + 0; // 0x808186F8
    r0 = r31 rlwinm 2; // rlwinm
    r4 = *(0xc + r3); // lwz @ 0x80818700
    *(0x12 + r1) = r7; // stb @ 0x80818708
    /* lwzx r4, r4, r0 */ // 0x8081870C
    *(0xc + r1) = r7; // sth @ 0x80818710
    r4 = *(0x40 + r4); // lwz @ 0x80818714
    *(0xe + r1) = r7; // stb @ 0x80818718
    r6 = *(4 + r4); // lhz @ 0x8081871C
    r5 = *(6 + r4); // lbz @ 0x80818720
    r0 = *(0xa + r4); // lbz @ 0x80818724
    *(0x10 + r1) = r7; // sth @ 0x80818728
    r4 = *(8 + r4); // lhz @ 0x8081872C
    *(8 + r1) = r8; // stw @ 0x80818730
    *(0xc + r1) = r6; // sth @ 0x80818734
    *(0xe + r1) = r5; // stb @ 0x80818738
    *(0x10 + r1) = r4; // sth @ 0x8081873C
    *(0x12 + r1) = r0; // stb @ 0x80818740
    FUN_805ABE9C(); // bl 0x805ABE9C
    /* lis r4, 0 */ // 0x80818748
    r4 = *(0 + r4); // lwz @ 0x80818750
    r4 = *(0xc0c + r4); // lwz @ 0x80818754
    FUN_805AC3BC(r4, r3); // bl 0x805AC3BC
    r0 = *(0x12 + r1); // lbz @ 0x8081875C
    r3 = *(0xc0 + r1); // lhz @ 0x80818760
    r4 = *(0xc2 + r1); // lbz @ 0x80818768
    r5 = *(0xc4 + r1); // lhz @ 0x8081876C
    r0 = *(0xc6 + r1); // lbz @ 0x80818770
    if (!=) goto 0x0x80818780;
    /* li r0, 0 */ // 0x80818778
    /* b 0x808187d8 */ // 0x8081877C
    if (!=) goto 0x0x80818790;
    /* li r0, 1 */ // 0x80818788
    /* b 0x808187d8 */ // 0x8081878C
    r0 = *(0xc + r1); // lhz @ 0x80818790
    if (>=) goto 0x0x808187a4;
    /* li r0, 1 */ // 0x8081879C
    /* b 0x808187d8 */ // 0x808187A0
    if (!=) goto 0x0x808187d4;
    r0 = *(0xe + r1); // lbz @ 0x808187A8
    if (>=) goto 0x0x808187bc;
    /* li r0, 1 */ // 0x808187B4
    /* b 0x808187d8 */ // 0x808187B8
    if (!=) goto 0x0x808187d4;
    r0 = *(0x10 + r1); // lhz @ 0x808187C0
    if (>) goto 0x0x808187d4;
    /* li r0, 1 */ // 0x808187CC
    /* b 0x808187d8 */ // 0x808187D0
    /* li r0, 0 */ // 0x808187D4
    /* li r31, 2 */ // 0x808187DC
    if (==) goto 0x0x808187e8;
    /* li r31, 0 */ // 0x808187E4
    /* lis r4, 0 */ // 0x808187E8
    r4 = r4 + 0; // 0x808187F0
    /* li r5, 0xc */ // 0x808187F4
    /* li r6, 5 */ // 0x808187F8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    r0 = *(0x104 + r1); // lwz @ 0x80818804
    r31 = *(0xfc + r1); // lwz @ 0x80818808
}