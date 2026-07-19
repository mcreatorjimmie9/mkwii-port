/* Function at 0x8060CA0C, size=520 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 12 function(s) */

int FUN_8060CA0C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0x80c */ // 0x8060CA14
    /* li r6, 1 */ // 0x8060CA18
    *(0x14 + r1) = r0; // stw @ 0x8060CA1C
    r0 = r4 + 0x100; // 0x8060CA20
    /* li r4, 1 */ // 0x8060CA24
    *(0xc + r1) = r31; // stw @ 0x8060CA28
    *(8 + r1) = r30; // stw @ 0x8060CA2C
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060CA34
    r7 = *(4 + r5); // lwz @ 0x8060CA38
    /* li r5, 1 */ // 0x8060CA3C
    r3 = *(0xc + r7); // lwz @ 0x8060CA40
    /* and. r0, r3, r0 */ // 0x8060CA44
    if (!=) goto 0x0x8060ca5c;
    r0 = *(4 + r7); // lwz @ 0x8060CA4C
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060CA50
    if (!=) goto 0x0x8060ca5c;
    /* li r6, 0 */ // 0x8060CA58
    if (!=) goto 0x0x8060ca74;
    r0 = *(0x14 + r7); // lwz @ 0x8060CA64
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8060CA68
    if (!=) goto 0x0x8060ca74;
    /* li r5, 0 */ // 0x8060CA70
    if (!=) goto 0x0x8060ca8c;
    r0 = *(8 + r7); // lwz @ 0x8060CA7C
    /* clrlwi. r0, r0, 0x1f */ // 0x8060CA80
    if (!=) goto 0x0x8060ca8c;
    /* li r4, 0 */ // 0x8060CA88
    if (!=) goto 0x0x8060cbfc;
    /* lis r4, 0 */ // 0x8060CA94
    r3 = r30;
    r31 = *(0 + r4); // lha @ 0x8060CA9C
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060CAA4
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060CAAC
    r3 = *(0x68 + r3); // lwz @ 0x8060CAB0
    /* lwzx r3, r3, r0 */ // 0x8060CAB4
    FUN_80733560(r4); // bl 0x80733560
    r3 = r30;
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_807962A8(r3); // bl 0x807962A8
    r0 = *(0x118 + r30); // lhz @ 0x8060CAC8
    /* li r4, 0 */ // 0x8060CACC
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8060CAD0
    if (==) goto 0x0x8060cae4;
    r0 = *(0x110 + r30); // lha @ 0x8060CAD8
    if (<=) goto 0x0x8060cb08;
    r0 = *(0x118 + r30); // lhz @ 0x8060CAE4
    /* lis r3, 0 */ // 0x8060CAE8
    *(0x110 + r30) = r31; // sth @ 0x8060CAEC
    r3 = r3 + 0; // 0x8060CAF0
    r0 = r0 | 4; // 0x8060CAF4
    /* li r4, 1 */ // 0x8060CAF8
    *(0x118 + r30) = r0; // sth @ 0x8060CAFC
    /* lfs f0, 8(r3) */ // 0x8060CB00
    /* stfs f0, 0x124(r30) */ // 0x8060CB04
    if (==) goto 0x0x8060cb80;
    r4 = *(0 + r30); // lwz @ 0x8060CB10
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x8060CB18
    r0 = *(4 + r4); // lwz @ 0x8060CB1C
    r0 = r0 | 0x10; // 0x8060CB20
    *(4 + r4) = r0; // stw @ 0x8060CB24
    /* lfs f1, 0x124(r30) */ // 0x8060CB28
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r30;
    /* li r4, 6 */ // 0x8060CB34
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r30;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060CB44
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060CB4C
    /* clrlwi r4, r31, 0x10 */ // 0x8060CB50
    r3 = *(0x68 + r3); // lwz @ 0x8060CB54
    /* lwzx r3, r3, r0 */ // 0x8060CB58
    FUN_807336DC(); // bl 0x807336DC
    r3 = r30;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_80859398(r3); // bl 0x80859398
    r3 = r30;
    /* li r4, 4 */ // 0x8060CB70
    /* li r5, 0 */ // 0x8060CB74
    /* li r6, 1 */ // 0x8060CB78
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    /* lis r3, 0 */ // 0x8060CB80
    r0 = *(0x148 + r30); // lha @ 0x8060CB84
    r3 = *(0 + r3); // lha @ 0x8060CB88
    if (<=) goto 0x0x8060cb98;
    *(0x148 + r30) = r3; // sth @ 0x8060CB94
    r3 = *(0 + r30); // lwz @ 0x8060CB98
    r3 = *(4 + r3); // lwz @ 0x8060CB9C
    r0 = *(8 + r3); // lwz @ 0x8060CBA0
    r0 = r0 | 0x80; // 0x8060CBA4
    *(8 + r3) = r0; // stw @ 0x8060CBA8
    r4 = *(0 + r30); // lwz @ 0x8060CBAC
    r3 = *(4 + r4); // lwz @ 0x8060CBB0
    r0 = *(0xc + r3); // lwz @ 0x8060CBB4
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x8060CBB8
    if (==) goto 0x0x8060cbfc;
    r5 = *(4 + r4); // lwz @ 0x8060CBC0
    /* li r0, 0 */ // 0x8060CBC4
    r3 = r30;
    r4 = *(0xc + r5); // lwz @ 0x8060CBCC
    r4 = r4 rlwinm 0; // rlwinm
    *(0xc + r5) = r4; // stw @ 0x8060CBD4
    *(0x18e + r30) = r0; // sth @ 0x8060CBD8
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060CBE0
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060CBE8
    /* li r4, 1 */ // 0x8060CBEC
    r3 = *(0x68 + r3); // lwz @ 0x8060CBF0
    /* lwzx r3, r3, r0 */ // 0x8060CBF4
    *(0x10d + r3) = r4; // stb @ 0x8060CBF8
    r0 = *(0x14 + r1); // lwz @ 0x8060CBFC
    r31 = *(0xc + r1); // lwz @ 0x8060CC00
    r30 = *(8 + r1); // lwz @ 0x8060CC04
    return;
}