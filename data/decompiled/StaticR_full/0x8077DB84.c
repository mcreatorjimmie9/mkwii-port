/* Function at 0x8077DB84, size=492 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8077DB84(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8077DB8C
    *(0xc + r1) = r31; // stw @ 0x8077DB94
    *(8 + r1) = r30; // stw @ 0x8077DB98
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x8077DBA0
    r0 = *(0xb74 + r4); // lwz @ 0x8077DBA4
    if (!=) goto 0x0x8077dbb8;
    /* li r3, 0 */ // 0x8077DBB0
    /* b 0x8077dd58 */ // 0x8077DBB4
    r0 = *(0x1ac + r3); // lbz @ 0x8077DBB8
    /* li r31, 0 */ // 0x8077DBBC
    if (==) goto 0x0x8077dbd0;
    FUN_80755B6C(); // bl 0x80755B6C
    /* b 0x8077dd54 */ // 0x8077DBCC
    r0 = *(0x1a4 + r3); // lbz @ 0x8077DBD0
    if (!=) goto 0x0x8077dd14;
    r0 = *(0x165 + r3); // lbz @ 0x8077DBDC
    if (!=) goto 0x0x8077dc14;
    /* lis r4, 0 */ // 0x8077DBE8
    /* lfs f0, 0x154(r3) */ // 0x8077DBEC
    r3 = *(0 + r4); // lwz @ 0x8077DBF0
    r3 = *(0xc + r3); // lwz @ 0x8077DBF4
    r3 = *(0 + r3); // lwz @ 0x8077DBF8
    /* lfs f1, 0xc(r3) */ // 0x8077DBFC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8077DC00
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8077DC04
    /* mfcr r31 */ // 0x8077DC08
    r31 = r31 rlwinm 3; // rlwinm
    /* b 0x8077dd54 */ // 0x8077DC10
    if (!=) goto 0x0x8077dd54;
    r0 = *(0x166 + r3); // lbz @ 0x8077DC1C
    if (!=) goto 0x0x8077dc54;
    /* lis r4, 0 */ // 0x8077DC28
    /* lfs f0, 0x158(r3) */ // 0x8077DC2C
    r4 = *(0 + r4); // lwz @ 0x8077DC30
    r4 = *(0xc + r4); // lwz @ 0x8077DC34
    r4 = *(0 + r4); // lwz @ 0x8077DC38
    /* lfs f1, 0xc(r4) */ // 0x8077DC3C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8077DC40
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8077DC44
    if (!=) goto 0x0x8077dc54;
    /* li r0, 1 */ // 0x8077DC4C
    *(0x166 + r3) = r0; // stb @ 0x8077DC50
    r0 = *(0x166 + r3); // lbz @ 0x8077DC54
    /* li r4, 0 */ // 0x8077DC58
    if (==) goto 0x0x8077dc74;
    r0 = *(0x167 + r3); // lbz @ 0x8077DC64
    if (!=) goto 0x0x8077dc74;
    /* li r4, 1 */ // 0x8077DC70
    if (==) goto 0x0x8077dc90;
    r0 = *(0xbc + r3); // lwz @ 0x8077DC7C
    if (!=) goto 0x0x8077dc90;
    r0 = *(0x15e + r3); // lhz @ 0x8077DC88
    *(0x15c + r3) = r0; // sth @ 0x8077DC8C
    if (==) goto 0x0x8077dcac;
    r3 = r30;
    FUN_807558E8(r3); // bl 0x807558E8
    r3 = *(0xd8 + r30); // lwz @ 0x8077DCA0
    /* li r4, 0x272 */ // 0x8077DCA4
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    r0 = *(0x166 + r30); // lbz @ 0x8077DCAC
    if (==) goto 0x0x8077dcd0;
    r3 = r30;
    FUN_80755938(r3); // bl 0x80755938
    if (!=) goto 0x0x8077dcd0;
    /* li r0, 0 */ // 0x8077DCC8
    *(0x168 + r30) = r0; // sth @ 0x8077DCCC
    r3 = *(0x168 + r30); // lha @ 0x8077DCD0
    /* li r4, 0 */ // 0x8077DCD4
    r0 = *(0x166 + r30); // lbz @ 0x8077DCD8
    *(0x167 + r30) = r0; // stb @ 0x8077DCE0
    if (==) goto 0x0x8077dcf0;
    r0 = r3 + 1; // 0x8077DCE8
    *(0x168 + r30) = r0; // sth @ 0x8077DCEC
    r3 = *(0x168 + r30); // lha @ 0x8077DCF0
    r0 = *(0x15c + r30); // lhz @ 0x8077DCF4
    if (<) goto 0x0x8077dd04;
    /* li r4, 1 */ // 0x8077DD00
    if (==) goto 0x0x8077dd54;
    /* li r31, 1 */ // 0x8077DD0C
    /* b 0x8077dd54 */ // 0x8077DD10
    /* lis r4, 0 */ // 0x8077DD14
    /* lfs f0, 0x1a8(r3) */ // 0x8077DD18
    r4 = *(0 + r4); // lwz @ 0x8077DD1C
    r4 = *(0xc + r4); // lwz @ 0x8077DD20
    r4 = *(0 + r4); // lwz @ 0x8077DD24
    /* lfs f1, 0xc(r4) */ // 0x8077DD28
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8077DD2C
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8077DD30
    /* mfcr r31 */ // 0x8077DD34
    /* rlwinm. r31, r31, 3, 0x1f, 0x1f */ // 0x8077DD38
    if (==) goto 0x0x8077dd54;
    /* lis r4, 0 */ // 0x8077DD40
    /* li r0, 0 */ // 0x8077DD44
    /* lfs f0, 0(r4) */ // 0x8077DD48
    *(0x1a4 + r3) = r0; // stb @ 0x8077DD4C
    /* stfs f0, 0x1a8(r3) */ // 0x8077DD50
    r3 = r31;
    r0 = *(0x14 + r1); // lwz @ 0x8077DD58
    r31 = *(0xc + r1); // lwz @ 0x8077DD5C
    r30 = *(8 + r1); // lwz @ 0x8077DD60
    return;
}