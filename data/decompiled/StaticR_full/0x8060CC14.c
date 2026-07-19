/* Function at 0x8060CC14, size=600 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 16 function(s) */

int FUN_8060CC14(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0x80c */ // 0x8060CC1C
    /* li r6, 1 */ // 0x8060CC20
    *(0x14 + r1) = r0; // stw @ 0x8060CC24
    r0 = r4 + 0x100; // 0x8060CC28
    /* li r4, 1 */ // 0x8060CC2C
    *(0xc + r1) = r31; // stw @ 0x8060CC30
    *(8 + r1) = r30; // stw @ 0x8060CC34
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060CC3C
    r7 = *(4 + r5); // lwz @ 0x8060CC40
    /* li r5, 1 */ // 0x8060CC44
    r3 = *(0xc + r7); // lwz @ 0x8060CC48
    /* and. r0, r3, r0 */ // 0x8060CC4C
    if (!=) goto 0x0x8060cc64;
    r0 = *(4 + r7); // lwz @ 0x8060CC54
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060CC58
    if (!=) goto 0x0x8060cc64;
    /* li r6, 0 */ // 0x8060CC60
    if (!=) goto 0x0x8060cc7c;
    r0 = *(0x14 + r7); // lwz @ 0x8060CC6C
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8060CC70
    if (!=) goto 0x0x8060cc7c;
    /* li r5, 0 */ // 0x8060CC78
    if (!=) goto 0x0x8060cc94;
    r0 = *(8 + r7); // lwz @ 0x8060CC84
    /* clrlwi. r0, r0, 0x1f */ // 0x8060CC88
    if (!=) goto 0x0x8060cc94;
    /* li r4, 0 */ // 0x8060CC90
    if (!=) goto 0x0x8060ce54;
    /* lis r4, 0 */ // 0x8060CC9C
    r3 = r30;
    r31 = *(0 + r4); // lha @ 0x8060CCA4
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060CCAC
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060CCB4
    r3 = *(0x68 + r3); // lwz @ 0x8060CCB8
    /* lwzx r3, r3, r0 */ // 0x8060CCBC
    FUN_80733560(r4); // bl 0x80733560
    r3 = r30;
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_807962A8(r3); // bl 0x807962A8
    r0 = *(0x118 + r30); // lhz @ 0x8060CCD0
    /* li r4, 0 */ // 0x8060CCD4
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8060CCD8
    if (==) goto 0x0x8060ccec;
    r0 = *(0x110 + r30); // lha @ 0x8060CCE0
    if (<=) goto 0x0x8060cd10;
    r0 = *(0x118 + r30); // lhz @ 0x8060CCEC
    /* lis r3, 0 */ // 0x8060CCF0
    *(0x110 + r30) = r31; // sth @ 0x8060CCF4
    r3 = r3 + 0; // 0x8060CCF8
    r0 = r0 | 4; // 0x8060CCFC
    /* li r4, 1 */ // 0x8060CD00
    *(0x118 + r30) = r0; // sth @ 0x8060CD04
    /* lfs f0, 8(r3) */ // 0x8060CD08
    /* stfs f0, 0x124(r30) */ // 0x8060CD0C
    if (==) goto 0x0x8060cd88;
    r4 = *(0 + r30); // lwz @ 0x8060CD18
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x8060CD20
    r0 = *(4 + r4); // lwz @ 0x8060CD24
    r0 = r0 | 0x10; // 0x8060CD28
    *(4 + r4) = r0; // stw @ 0x8060CD2C
    /* lfs f1, 0x124(r30) */ // 0x8060CD30
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r30;
    /* li r4, 6 */ // 0x8060CD3C
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r30;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060CD4C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060CD54
    /* clrlwi r4, r31, 0x10 */ // 0x8060CD58
    r3 = *(0x68 + r3); // lwz @ 0x8060CD5C
    /* lwzx r3, r3, r0 */ // 0x8060CD60
    FUN_807336DC(); // bl 0x807336DC
    r3 = r30;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_80859398(r3); // bl 0x80859398
    r3 = r30;
    /* li r4, 4 */ // 0x8060CD78
    /* li r5, 0 */ // 0x8060CD7C
    /* li r6, 1 */ // 0x8060CD80
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    /* lis r3, 0 */ // 0x8060CD88
    r0 = *(0x148 + r30); // lha @ 0x8060CD8C
    r3 = *(0 + r3); // lha @ 0x8060CD90
    if (<=) goto 0x0x8060cda0;
    *(0x148 + r30) = r3; // sth @ 0x8060CD9C
    r4 = *(0 + r30); // lwz @ 0x8060CDA0
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x8060CDA8
    r0 = *(8 + r4); // lwz @ 0x8060CDAC
    r0 = r0 | 0x80; // 0x8060CDB0
    *(8 + r4) = r0; // stw @ 0x8060CDB4
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_8084C054(); // bl 0x8084C054
    /* lis r4, 0 */ // 0x8060CDC0
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x8060CDC8
    /* li r4, 3 */ // 0x8060CDCC
    /* li r5, 1 */ // 0x8060CDD0
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r4 = *(0 + r30); // lwz @ 0x8060CDD8
    r3 = *(4 + r4); // lwz @ 0x8060CDDC
    r0 = *(0xc + r3); // lwz @ 0x8060CDE0
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x8060CDE4
    if (==) goto 0x0x8060ce28;
    r5 = *(4 + r4); // lwz @ 0x8060CDEC
    /* li r0, 0 */ // 0x8060CDF0
    r3 = r30;
    r4 = *(0xc + r5); // lwz @ 0x8060CDF8
    r4 = r4 rlwinm 0; // rlwinm
    *(0xc + r5) = r4; // stw @ 0x8060CE00
    *(0x18e + r30) = r0; // sth @ 0x8060CE04
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060CE0C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060CE14
    /* li r4, 1 */ // 0x8060CE18
    r3 = *(0x68 + r3); // lwz @ 0x8060CE1C
    /* lwzx r3, r3, r0 */ // 0x8060CE20
    *(0x10d + r3) = r4; // stb @ 0x8060CE24
    /* lis r3, 0 */ // 0x8060CE28
    r5 = *(0 + r30); // lwz @ 0x8060CE2C
    r0 = *(0 + r3); // lha @ 0x8060CE30
    r3 = r30;
    *(0x188 + r30) = r0; // sth @ 0x8060CE38
    /* li r4, 0x1a */ // 0x8060CE3C
    r5 = *(4 + r5); // lwz @ 0x8060CE40
    r0 = *(4 + r5); // lwz @ 0x8060CE44
    r0 = r0 | 0x400; // 0x8060CE48
    *(4 + r5) = r0; // stw @ 0x8060CE4C
    FUN_8061F03C(r4); // bl 0x8061F03C
    r0 = *(0x14 + r1); // lwz @ 0x8060CE54
    r31 = *(0xc + r1); // lwz @ 0x8060CE58
    r30 = *(8 + r1); // lwz @ 0x8060CE5C
    return;
}