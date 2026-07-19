/* Function at 0x805FD9B4, size=368 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 6 function(s) */

int FUN_805FD9B4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x805FD9C0
    r31 = r7;
    r29 = r5;
    r27 = r3;
    r28 = r4;
    r30 = r6;
    r5 = r31;
    FUN_805FDB80(r5); // bl 0x805FDB80
    /* lis r3, 0x4011 */ // 0x805FD9E0
    r0 = *(0 + r31); // lwz @ 0x805FD9E4
    r4 = r3 + -0x5000; // 0x805FD9E8
    /* and. r0, r0, r4 */ // 0x805FD9EC
    if (==) goto 0x0x805fda00;
    r3 = r31;
    FUN_80842FAC(r4, r3); // bl 0x80842FAC
    /* b 0x805fda04 */ // 0x805FD9FC
    /* li r3, 0 */ // 0x805FDA00
    if (==) goto 0x0x805fda7c;
    /* lis r4, 0 */ // 0x805FDA0C
    /* lis r3, -0x3fef */ // 0x805FDA10
    r5 = *(0 + r4); // lwz @ 0x805FDA14
    r4 = r3 + -0x7000; // 0x805FDA18
    r0 = *(0 + r31); // lwz @ 0x805FDA1C
    r3 = *(4 + r5); // lhz @ 0x805FDA20
    /* and. r0, r0, r4 */ // 0x805FDA24
    /* clrlwi r26, r3, 0x1b */ // 0x805FDA28
    r25 = r3 rlwinm 0x1b; // rlwinm
    if (==) goto 0x0x805fda40;
    r3 = r31;
    FUN_80842FAC(r3); // bl 0x80842FAC
    /* b 0x805fda44 */ // 0x805FDA3C
    /* li r3, 0 */ // 0x805FDA40
    if (==) goto 0x0x805fda74;
    *(0x74 + r28) = r26; // stw @ 0x805FDA4C
    /* lis r3, 0 */ // 0x805FDA50
    *(0x78 + r28) = r25; // stw @ 0x805FDA54
    r3 = *(0 + r3); // lwz @ 0x805FDA58
    r0 = *(4 + r3); // lhz @ 0x805FDA5C
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x805FDA60
    if (==) goto 0x0x805fda74;
    r0 = *(0 + r28); // lwz @ 0x805FDA68
    r0 = r0 | 0x200; // 0x805FDA6C
    *(0 + r28) = r0; // stw @ 0x805FDA70
    /* li r26, 1 */ // 0x805FDA74
    /* b 0x805fda80 */ // 0x805FDA78
    /* li r26, 0 */ // 0x805FDA7C
    r3 = r27;
    r4 = r28;
    r5 = r29;
    r6 = r30;
    r7 = r31;
    /* li r8, 0 */ // 0x805FDA94
    FUN_805FDC54(r4, r5, r6, r7, r8); // bl 0x805FDC54
    if (==) goto 0x0x805fdab8;
    r3 = r27;
    r4 = r28;
    r5 = r29;
    r6 = r30;
    FUN_805FE4BC(r3, r4, r5, r6); // bl 0x805FE4BC
    r0 = *(0 + r31); // lwz @ 0x805FDAB8
    /* rlwinm. r0, r0, 0, 0xe, 0xe */ // 0x805FDABC
    if (==) goto 0x0x805fdad4;
    r3 = r31;
    /* lis r4, 2 */ // 0x805FDAC8
    FUN_80842FAC(r3, r4); // bl 0x80842FAC
    /* b 0x805fdad8 */ // 0x805FDAD0
    /* li r3, 0 */ // 0x805FDAD4
    if (==) goto 0x0x805fdb10;
    /* lis r4, 0 */ // 0x805FDAE0
    r3 = *(4 + r27); // lwz @ 0x805FDAE4
    r4 = *(0 + r4); // lwz @ 0x805FDAE8
    r3 = *(4 + r3); // lwz @ 0x805FDAEC
    r0 = *(4 + r4); // lhz @ 0x805FDAF0
    r0 = r0 rlwinm 0x1b; // rlwinm
    *(0x80 + r3) = r0; // stw @ 0x805FDAF8
    r3 = *(4 + r27); // lwz @ 0x805FDAFC
    r3 = *(4 + r3); // lwz @ 0x805FDB00
    r0 = *(8 + r3); // lwz @ 0x805FDB04
    r0 = r0 | 8; // 0x805FDB08
    *(8 + r3) = r0; // stw @ 0x805FDB0C
    r0 = *(0x34 + r1); // lwz @ 0x805FDB14
    return;
}