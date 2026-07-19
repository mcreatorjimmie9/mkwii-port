/* Function at 0x805B73A4, size=340 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_805B73A4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x805B73AC
    /* mulli r0, r4, 0xf0 */ // 0x805B73B4
    *(0x2c + r1) = r31; // stw @ 0x805B73B8
    *(0x28 + r1) = r30; // stw @ 0x805B73BC
    r30 = r4;
    r3 = *(0 + r3); // lwz @ 0x805B73C4
    r4 = r3 + r0; // 0x805B73C8
    r0 = *(0xcd0 + r4); // lbz @ 0x805B73CC
    if (==) goto 0x0x805b7420;
    r3 = *(0xcc0 + r4); // lbz @ 0x805B73D8
    /* li r6, 1 */ // 0x805B73DC
    r0 = *(0xcc1 + r4); // lbz @ 0x805B73E0
    *(0x21 + r1) = r0; // stb @ 0x805B73E4
    *(0x20 + r1) = r3; // stb @ 0x805B73E8
    r3 = *(0xcc2 + r4); // lbz @ 0x805B73EC
    r0 = *(0xcc3 + r4); // lbz @ 0x805B73F0
    *(0x23 + r1) = r0; // stb @ 0x805B73F4
    *(0x22 + r1) = r3; // stb @ 0x805B73F8
    r3 = *(0xcc4 + r4); // lbz @ 0x805B73FC
    r0 = *(0xcc5 + r4); // lbz @ 0x805B7400
    *(0x25 + r1) = r0; // stb @ 0x805B7404
    *(0x24 + r1) = r3; // stb @ 0x805B7408
    r3 = *(0xcc6 + r4); // lbz @ 0x805B740C
    r0 = *(0xcc7 + r4); // lbz @ 0x805B7410
    *(0x27 + r1) = r0; // stb @ 0x805B7414
    *(0x26 + r1) = r3; // stb @ 0x805B7418
    /* b 0x805b7424 */ // 0x805B741C
    /* li r6, 0 */ // 0x805B7420
    if (==) goto 0x0x805b7650;
    r30 = r5;
    if (!=) goto 0x0x805b7440;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r30 = *(0xc94 + r3); // lwz @ 0x805B743C
    /* lis r3, 0 */ // 0x805B7440
    r3 = *(0 + r3); // lwz @ 0x805B7444
    r0 = *(0x263 + r3); // lbz @ 0x805B7448
    if (!=) goto 0x0x805b745c;
    /* li r0, -1 */ // 0x805B7454
    /* b 0x805b7494 */ // 0x805B7458
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (==) goto 0x0x805b7478;
    /* li r0, 0 */ // 0x805B7470
    /* b 0x805b7494 */ // 0x805B7474
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* li r0, -1 */ // 0x805B7488
    if (==) goto 0x0x805b7494;
    /* li r0, 1 */ // 0x805B7490
    if (==) goto 0x0x805b74a8;
    if (==) goto 0x0x805b7574;
    /* b 0x805b7644 */ // 0x805B74A4
    if (!=) goto 0x0x805b74b8;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r30 = *(0xc94 + r3); // lwz @ 0x805B74B4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (!=) goto 0x0x805b74d4;
    /* li r31, 0 */ // 0x805B74CC
    /* b 0x805b7648 */ // 0x805B74D0
    r4 = r30;
    /* li r3, 0xb8 */ // 0x805B74D8
    /* li r5, 4 */ // 0x805B74DC
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x805b7560;
    /* lis r4, 0 */ // 0x805B74F0
    /* lis r7, 0 */ // 0x805B74F4
}