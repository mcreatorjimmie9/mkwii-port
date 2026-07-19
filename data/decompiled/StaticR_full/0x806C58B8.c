/* Function at 0x806C58B8, size=532 bytes */
/* Stack frame: 272 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_806C58B8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -272(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r3;
    *(0x104 + r1) = r29; // stw @ 0x806C58D0
    *(0x100 + r1) = r28; // stw @ 0x806C58D4
    r4 = *(0x54 + r3); // lwz @ 0x806C58D8
    r4 = r4 + 1; // 0x806C58DC
    *(0x54 + r3) = r4; // stw @ 0x806C58E0
    if (<=) goto 0x0x806c5910;
    /* li r0, 9 */ // 0x806C58EC
    *(0x54 + r3) = r0; // stw @ 0x806C58F0
    /* lis r3, 0 */ // 0x806C58F4
    r3 = *(0 + r3); // lwz @ 0x806C58F8
    r28 = *(0x98 + r3); // lwz @ 0x806C58FC
    FUN_805E3430(r3); // bl 0x805E3430
    *(0x4bc + r28) = r4; // stw @ 0x806C5904
    *(0x4b8 + r28) = r3; // stw @ 0x806C5908
    /* b 0x806c5ab8 */ // 0x806C590C
    r0 = r4 + -5; // 0x806C5910
    /* lis r28, 1 */ // 0x806C5914
    /* clrlwi r29, r0, 0x18 */ // 0x806C5918
    /* lis r31, 0 */ // 0x806C591C
    r0 = r28 + -0x7340; // 0x806C5920
    r3 = *(0 + r31); // lwz @ 0x806C5924
    r0 = r29 * r0; // 0x806C5928
    r3 = *(0x14 + r3); // lwz @ 0x806C592C
    r3 = r3 + r0; // 0x806C5930
    r3 = *(8 + r3); // lwz @ 0x806C5934
    /* addis r0, r3, -0x524b */ // 0x806C5938
    if (!=) goto 0x0x806c5ab8;
    /* lis r3, 0 */ // 0x806C5944
    r5 = r29;
    r3 = *(0 + r3); // lwz @ 0x806C594C
    r4 = r30 + 0x1f4; // 0x806C5950
    FUN_806F7DF8(r3, r5, r4); // bl 0x806F7DF8
    if (==) goto 0x0x806c5ab8;
    r3 = r28 + -0x6c10; // 0x806C5960
    /* li r0, 0 */ // 0x806C5964
    r4 = r29 * r3; // 0x806C5968
    r5 = *(0 + r31); // lwz @ 0x806C596C
    /* lis r3, 0 */ // 0x806C5970
    *(0x1e + r1) = r0; // stb @ 0x806C5974
    r3 = r3 + 0; // 0x806C5978
    *(0x14 + r1) = r3; // stw @ 0x806C597C
    r4 = r5 + r4; // 0x806C5980
    *(0x18 + r1) = r0; // sth @ 0x806C5984
    r31 = r4 + 0x38; // 0x806C5988
    /* addis r6, r31, 1 */ // 0x806C598C
    *(0x1a + r1) = r0; // stb @ 0x806C5990
    r5 = *(-0x6da6 + r6); // lbz @ 0x806C5994
    *(0x1c + r1) = r0; // sth @ 0x806C5998
    if (==) goto 0x0x806c59c4;
    r4 = *(-0x6dac + r6); // lhz @ 0x806C59A4
    r3 = *(-0x6daa + r6); // lbz @ 0x806C59A8
    r0 = *(-0x6da8 + r6); // lhz @ 0x806C59AC
    *(0x18 + r1) = r4; // sth @ 0x806C59B0
    r28 = *(-0x6da4 + r6); // lwz @ 0x806C59B4
    *(0x1a + r1) = r3; // stb @ 0x806C59B8
    *(0x1c + r1) = r0; // sth @ 0x806C59BC
    *(0x1e + r1) = r5; // stb @ 0x806C59C0
    r4 = r30 + 0x1f4; // 0x806C59C8
    FUN_805ABFC4(r3, r4); // bl 0x805ABFC4
    r0 = *(0xce + r1); // lbz @ 0x806C59D0
    /* lis r6, 0 */ // 0x806C59D4
    r5 = *(0xc8 + r1); // lhz @ 0x806C59D8
    r6 = r6 + 0; // 0x806C59DC
    r4 = *(0xca + r1); // lbz @ 0x806C59E0
    r3 = *(0xcc + r1); // lhz @ 0x806C59E8
    *(8 + r1) = r6; // stw @ 0x806C59EC
    r30 = *(0xd8 + r1); // lwz @ 0x806C59F0
    *(0xc + r1) = r5; // sth @ 0x806C59F4
    *(0xe + r1) = r4; // stb @ 0x806C59F8
    *(0x10 + r1) = r3; // sth @ 0x806C59FC
    *(0x12 + r1) = r0; // stb @ 0x806C5A00
    if (==) goto 0x0x806c5a14;
    r0 = *(0x1e + r1); // lbz @ 0x806C5A08
    if (!=) goto 0x0x806c5a1c;
    /* li r6, 0 */ // 0x806C5A14
    /* b 0x806c5a48 */ // 0x806C5A18
    r0 = *(0x1c + r1); // lhz @ 0x806C5A1C
    /* li r6, 0 */ // 0x806C5A20
    if (!=) goto 0x0x806c5a48;
    r0 = *(0x1a + r1); // lbz @ 0x806C5A2C
    if (!=) goto 0x0x806c5a48;
    r0 = *(0x18 + r1); // lhz @ 0x806C5A38
    if (!=) goto 0x0x806c5a48;
    /* li r6, 1 */ // 0x806C5A44
    if (==) goto 0x0x806c5a58;
    if (==) goto 0x0x806c5aa0;
    /* lis r3, 0 */ // 0x806C5A58
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x806C5A60
    /* li r5, 4 */ // 0x806C5A68
    /* li r6, 0 */ // 0x806C5A6C
    r3 = *(0x90 + r3); // lwz @ 0x806C5A70
    FUN_80684A18(r7, r5, r6); // bl 0x80684A18
    /* addis r3, r31, 1 */ // 0x806C5A78
    r0 = *(0xc + r1); // lhz @ 0x806C5A7C
    *(-0x6dac + r3) = r0; // sth @ 0x806C5A80
    r0 = *(0xe + r1); // lbz @ 0x806C5A84
    *(-0x6daa + r3) = r0; // stb @ 0x806C5A88
    r0 = *(0x10 + r1); // lhz @ 0x806C5A8C
    *(-0x6da8 + r3) = r0; // sth @ 0x806C5A90
    r0 = *(0x12 + r1); // lbz @ 0x806C5A94
    *(-0x6da6 + r3) = r0; // stb @ 0x806C5A98
    *(-0x6da4 + r3) = r30; // stw @ 0x806C5A9C
    /* lis r4, 0 */ // 0x806C5AA0
    r4 = r4 + 0; // 0x806C5AA8
    /* li r5, 0xc */ // 0x806C5AAC
    /* li r6, 5 */ // 0x806C5AB0
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r0 = *(0x114 + r1); // lwz @ 0x806C5AB8
    r31 = *(0x10c + r1); // lwz @ 0x806C5ABC
    r30 = *(0x108 + r1); // lwz @ 0x806C5AC0
    r29 = *(0x104 + r1); // lwz @ 0x806C5AC4
    r28 = *(0x100 + r1); // lwz @ 0x806C5AC8
}