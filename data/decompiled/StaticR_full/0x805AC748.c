/* Function at 0x805AC748, size=428 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_805AC748(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r27 */
    /* stmw r27, 0x5c(r1) */ // 0x805AC754
    /* lis r31, 0 */ // 0x805AC758
    r29 = r3;
    r30 = r4;
    r3 = *(0 + r31); // lwz @ 0x805AC764
    FUN_805C2BFC(); // bl 0x805C2BFC
    *(0x64 + r29) = r3; // stb @ 0x805AC76C
    /* li r0, 0 */ // 0x805AC770
    /* lis r4, 0 */ // 0x805AC774
    /* lis r3, 0 */ // 0x805AC778
    r4 = r4 + 0; // 0x805AC77C
    *(0x18 + r1) = r4; // stw @ 0x805AC780
    r3 = *(0 + r3); // lwz @ 0x805AC784
    *(0x22 + r1) = r0; // stb @ 0x805AC788
    *(0x1c + r1) = r0; // sth @ 0x805AC78C
    *(0x1e + r1) = r0; // stb @ 0x805AC790
    *(0x20 + r1) = r0; // sth @ 0x805AC794
    r0 = *(0xb90 + r3); // lwz @ 0x805AC798
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x805AC79C
    if (!=) goto 0x0x805ac80c;
    r28 = r30 rlwinm 2; // rlwinm
    /* li r27, 0 */ // 0x805AC7A8
    /* b 0x805ac7fc */ // 0x805AC7AC
    r3 = *(0 + r31); // lwz @ 0x805AC7B0
    r0 = r27 + 1; // 0x805AC7B4
    /* clrlwi r4, r0, 0x18 */ // 0x805AC7B8
    r0 = *(0xc + r3); // lwz @ 0x805AC7C0
    /* lwzx r3, r28, r0 */ // 0x805AC7C4
    FUN_805C4C84(r5); // bl 0x805C4C84
    /* clrlwi r3, r27, 0x18 */ // 0x805AC7CC
    r0 = *(0x1c + r1); // lhz @ 0x805AC7D0
    /* mulli r3, r3, 0xc */ // 0x805AC7D4
    r27 = r27 + 1; // 0x805AC7D8
    r3 = r29 + r3; // 0x805AC7DC
    *(0x6c + r3) = r0; // sth @ 0x805AC7E0
    r0 = *(0x1e + r1); // lbz @ 0x805AC7E4
    *(0x6e + r3) = r0; // stb @ 0x805AC7E8
    r0 = *(0x20 + r1); // lhz @ 0x805AC7EC
    *(0x70 + r3) = r0; // sth @ 0x805AC7F0
    r0 = *(0x22 + r1); // lbz @ 0x805AC7F4
    *(0x72 + r3) = r0; // stb @ 0x805AC7F8
    r0 = *(0x64 + r29); // lbz @ 0x805AC7FC
    /* clrlwi r3, r27, 0x18 */ // 0x805AC800
    if (<) goto 0x0x805ac7b0;
    /* lis r3, 0 */ // 0x805AC80C
    r0 = r30 rlwinm 2; // rlwinm
    r3 = *(0 + r3); // lwz @ 0x805AC814
    /* mulli r31, r30, 0xf0 */ // 0x805AC818
    /* lis r5, 0 */ // 0x805AC81C
    r4 = *(0xc + r3); // lwz @ 0x805AC820
    /* lis r3, 0 */ // 0x805AC824
    /* lwzx r4, r4, r0 */ // 0x805AC828
    r6 = *(0x40 + r4); // lwz @ 0x805AC82C
    r4 = *(4 + r6); // lhz @ 0x805AC830
    *(0x1c + r1) = r4; // sth @ 0x805AC834
    r0 = *(6 + r6); // lbz @ 0x805AC838
    *(0x1e + r1) = r0; // stb @ 0x805AC83C
    r0 = *(8 + r6); // lhz @ 0x805AC840
    *(0x20 + r1) = r0; // sth @ 0x805AC844
    r0 = *(0xa + r6); // lbz @ 0x805AC848
    *(0x22 + r1) = r0; // stb @ 0x805AC84C
    *(0xa8 + r29) = r4; // sth @ 0x805AC850
    r0 = *(0x1e + r1); // lbz @ 0x805AC854
    *(0xaa + r29) = r0; // stb @ 0x805AC858
    r0 = *(0x20 + r1); // lhz @ 0x805AC85C
    *(0xac + r29) = r0; // sth @ 0x805AC860
    r0 = *(0x22 + r1); // lbz @ 0x805AC864
    *(0xae + r29) = r0; // stb @ 0x805AC868
    r0 = *(0 + r5); // lwz @ 0x805AC86C
    r4 = r0 + r31; // 0x805AC870
    r0 = *(0x34 + r4); // lwz @ 0x805AC874
    *(0xb0 + r29) = r0; // stw @ 0x805AC878
    r0 = *(0 + r5); // lwz @ 0x805AC87C
    r4 = r0 + r31; // 0x805AC880
    r0 = *(0x30 + r4); // lwz @ 0x805AC884
    *(0xb4 + r29) = r0; // stw @ 0x805AC888
    r4 = *(0 + r5); // lwz @ 0x805AC88C
    r0 = *(0xb68 + r4); // lwz @ 0x805AC890
    *(0xb8 + r29) = r0; // stw @ 0x805AC894
    r3 = *(0 + r3); // lwz @ 0x805AC898
    r3 = *(8 + r3); // lwz @ 0x805AC89C
    if (==) goto 0x0x805ac8bc;
    r12 = *(0 + r3); // lwz @ 0x805AC8A8
    r12 = *(0x10 + r12); // lwz @ 0x805AC8AC
    /* mtctr r12 */ // 0x805AC8B0
    /* bctrl  */ // 0x805AC8B4
    /* b 0x805ac8c0 */ // 0x805AC8B8
    /* li r3, -1 */ // 0x805AC8BC
    *(0xbc + r29) = r3; // stw @ 0x805AC8C0
    /* lis r3, 0 */ // 0x805AC8C4
    r3 = *(0 + r3); // lwz @ 0x805AC8C8
    r3 = *(8 + r3); // lwz @ 0x805AC8CC
    if (==) goto 0x0x805ac8e0;
    r3 = *(0x51 + r3); // lbz @ 0x805AC8D8
    /* b 0x805ac8e4 */ // 0x805AC8DC
    /* li r3, 0 */ // 0x805AC8E0
    /* li r0, 1 */ // 0x805AC8E4
    *(0xc8 + r29) = r3; // stb @ 0x805AC8E8
    *(0xc4 + r29) = r0; // stw @ 0x805AC8EC
    FUN_805E3430(r3); // bl 0x805E3430
}