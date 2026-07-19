/* Function at 0x807F8744, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807F8744(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807F874C
    *(0x24 + r1) = r0; // stw @ 0x807F8750
    *(0x1c + r1) = r31; // stw @ 0x807F8754
    r31 = r3;
    r3 = r3 + 0x30; // 0x807F875C
    /* lfs f1, 0(r4) */ // 0x807F8760
    FUN_80812884(r3); // bl 0x80812884
    r0 = *(0xc8 + r31); // lwz @ 0x807F8768
    if (==) goto 0x0x807f877c;
    /* li r0, 1 */ // 0x807F8774
    *(0xd0 + r31) = r0; // stb @ 0x807F8778
    r0 = *(0xb4 + r31); // lbz @ 0x807F877C
    if (==) goto 0x0x807f87d8;
    /* lis r3, 0 */ // 0x807F8788
    /* lfs f1, 0xbc(r31) */ // 0x807F878C
    /* lfs f0, 0(r3) */ // 0x807F8790
    r4 = r31 + 0x30; // 0x807F8798
    r5 = r31 + 0xb8; // 0x807F879C
    /* fsubs f0, f1, f0 */ // 0x807F87A0
    /* stfs f0, 0xbc(r31) */ // 0x807F87A4
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x807F87AC
    r3 = r31;
    /* lfs f2, 0x10(r1) */ // 0x807F87B4
    /* lfs f1, 0xc(r1) */ // 0x807F87B8
    r0 = r0 | 1; // 0x807F87BC
    /* lfs f0, 8(r1) */ // 0x807F87C0
    /* stfs f0, 0x30(r31) */ // 0x807F87C4
    *(0x2c + r31) = r0; // sth @ 0x807F87C8
    /* stfs f1, 0x34(r31) */ // 0x807F87CC
    /* stfs f2, 0x38(r31) */ // 0x807F87D0
    FUN_807F89D0(); // bl 0x807F89D0
    r0 = *(0x24 + r1); // lwz @ 0x807F87D8
    r31 = *(0x1c + r1); // lwz @ 0x807F87DC
    return;
}