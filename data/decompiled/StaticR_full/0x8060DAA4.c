/* Function at 0x8060DAA4, size=392 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 8 function(s) */

int FUN_8060DAA4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0x80c */ // 0x8060DAAC
    /* li r5, 1 */ // 0x8060DAB0
    *(0x14 + r1) = r0; // stw @ 0x8060DAB4
    r0 = r4 + 0x100; // 0x8060DAB8
    *(0xc + r1) = r31; // stw @ 0x8060DABC
    r31 = r3;
    r6 = *(0 + r3); // lwz @ 0x8060DAC4
    r7 = *(4 + r6); // lwz @ 0x8060DAC8
    r4 = *(0xc + r7); // lwz @ 0x8060DACC
    /* and. r0, r4, r0 */ // 0x8060DAD0
    if (!=) goto 0x0x8060dae8;
    r0 = *(8 + r7); // lwz @ 0x8060DAD8
    /* clrlwi. r0, r0, 0x1f */ // 0x8060DADC
    if (!=) goto 0x0x8060dae8;
    /* li r5, 0 */ // 0x8060DAE4
    if (!=) goto 0x0x8060dc18;
    r5 = *(4 + r6); // lwz @ 0x8060DAF0
    /* lis r4, 0 */ // 0x8060DAF4
    r0 = *(8 + r5); // lwz @ 0x8060DAF8
    r0 = r0 | 0x8000; // 0x8060DAFC
    *(8 + r5) = r0; // stw @ 0x8060DB00
    r0 = *(0 + r4); // lha @ 0x8060DB04
    *(0x18a + r3) = r0; // sth @ 0x8060DB08
    r0 = *(0x148 + r3); // lha @ 0x8060DB0C
    r4 = *(0 + r4); // lha @ 0x8060DB10
    if (<=) goto 0x0x8060db20;
    *(0x148 + r3) = r4; // sth @ 0x8060DB1C
    r4 = *(0 + r3); // lwz @ 0x8060DB20
    r4 = *(4 + r4); // lwz @ 0x8060DB24
    r0 = *(8 + r4); // lwz @ 0x8060DB28
    r0 = r0 | 0x80; // 0x8060DB2C
    *(8 + r4) = r0; // stw @ 0x8060DB30
    r5 = *(0 + r3); // lwz @ 0x8060DB34
    r4 = *(4 + r5); // lwz @ 0x8060DB38
    r0 = *(0xc + r4); // lwz @ 0x8060DB3C
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x8060DB40
    if (==) goto 0x0x8060db84;
    r5 = *(4 + r5); // lwz @ 0x8060DB48
    /* li r0, 0 */ // 0x8060DB4C
    r4 = *(0xc + r5); // lwz @ 0x8060DB50
    r4 = r4 rlwinm 0; // rlwinm
    *(0xc + r5) = r4; // stw @ 0x8060DB58
    *(0x18e + r3) = r0; // sth @ 0x8060DB5C
    r3 = r31;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060DB68
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060DB70
    /* li r4, 1 */ // 0x8060DB74
    r3 = *(0x68 + r3); // lwz @ 0x8060DB78
    /* lwzx r3, r3, r0 */ // 0x8060DB7C
    *(0x10d + r3) = r4; // stb @ 0x8060DB80
    r4 = *(0 + r31); // lwz @ 0x8060DB84
    r3 = *(4 + r4); // lwz @ 0x8060DB88
    r0 = *(0xc + r3); // lwz @ 0x8060DB8C
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x8060DB90
    if (==) goto 0x0x8060dbd4;
    r4 = *(4 + r4); // lwz @ 0x8060DB98
    r3 = r31;
    r0 = *(0xc + r4); // lwz @ 0x8060DBA0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8060DBA8
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8060DBB0
    /* lis r4, 0 */ // 0x8060DBB4
    /* lfs f1, 0(r4) */ // 0x8060DBB8
    /* li r4, 0x1a5 */ // 0x8060DBBC
    r12 = *(0xe0 + r12); // lwz @ 0x8060DBC0
    /* mtctr r12 */ // 0x8060DBC4
    /* bctrl  */ // 0x8060DBC8
    r3 = *(0x260 + r31); // lwz @ 0x8060DBCC
    FUN_806426B0(r4); // bl 0x806426B0
    r3 = r31;
    /* li r4, 2 */ // 0x8060DBD8
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r31;
    FUN_8061E010(r3, r4, r3); // bl 0x8061E010
    r0 = *(0xe0 + r3); // lbz @ 0x8060DBE8
    if (==) goto 0x0x8060dc04;
    /* lis r3, 0 */ // 0x8060DBF4
    /* li r4, 1 */ // 0x8060DBF8
    r3 = *(0 + r3); // lwz @ 0x8060DBFC
    FUN_8079C4AC(r3, r4); // bl 0x8079C4AC
    r3 = r31;
    FUN_8061E80C(r3, r4, r3); // bl 0x8061E80C
    r3 = r31;
    /* li r4, 0x13 */ // 0x8060DC10
    FUN_8061F03C(r3, r3, r4); // bl 0x8061F03C
    r0 = *(0x14 + r1); // lwz @ 0x8060DC18
    r31 = *(0xc + r1); // lwz @ 0x8060DC1C
    return;
}