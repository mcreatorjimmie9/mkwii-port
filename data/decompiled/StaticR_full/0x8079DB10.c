/* Function at 0x8079DB10, size=340 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_8079DB10(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* lis r4, 0 */ // 0x8079DB18
    /* lis r6, 0 */ // 0x8079DB1C
    *(0x44 + r1) = r0; // stw @ 0x8079DB20
    /* stmw r23, 0x1c(r1) */ // 0x8079DB24
    r26 = r3;
    /* li r29, 0xff */ // 0x8079DB34
    /* li r28, 0xff */ // 0x8079DB38
    /* li r27, 0 */ // 0x8079DB3C
    /* lis r31, 0 */ // 0x8079DB40
    /* lis r24, 0 */ // 0x8079DB44
    /* li r23, 0xff */ // 0x8079DB48
    /* lbzu r10, 0(r4) */ // 0x8079DB4C
    /* lbzu r5, 0(r6) */ // 0x8079DB50
    r9 = *(1 + r4); // lbz @ 0x8079DB54
    r8 = *(2 + r4); // lbz @ 0x8079DB58
    r7 = *(3 + r4); // lbz @ 0x8079DB5C
    r4 = *(1 + r6); // lbz @ 0x8079DB60
    r3 = *(2 + r6); // lbz @ 0x8079DB64
    r0 = *(3 + r6); // lbz @ 0x8079DB68
    *(0xc + r1) = r10; // stb @ 0x8079DB6C
    *(0xd + r1) = r9; // stb @ 0x8079DB70
    *(0xe + r1) = r8; // stb @ 0x8079DB74
    *(0xf + r1) = r7; // stb @ 0x8079DB78
    *(8 + r1) = r5; // stb @ 0x8079DB7C
    *(9 + r1) = r4; // stb @ 0x8079DB80
    *(0xa + r1) = r3; // stb @ 0x8079DB84
    *(0xb + r1) = r0; // stb @ 0x8079DB88
    /* b 0x8079dbd8 */ // 0x8079DB8C
    r3 = *(0 + r31); // lwz @ 0x8079DB90
    /* clrlwi r4, r27, 0x18 */ // 0x8079DB94
    FUN_805C14C8(); // bl 0x805C14C8
    /* extsb. r0, r3 */ // 0x8079DB9C
    if (>=) goto 0x0x8079dbb4;
    /* clrlwi r0, r27, 0x18 */ // 0x8079DBA4
    /* stbx r23, r30, r0 */ // 0x8079DBA8
    /* stbx r23, r25, r0 */ // 0x8079DBAC
    /* b 0x8079dbd4 */ // 0x8079DBB0
    r4 = *(0 + r24); // lwz @ 0x8079DBB4
    /* clrlwi r5, r27, 0x18 */ // 0x8079DBB8
    r0 = r3 rlwinm 2; // rlwinm
    /* stbx r3, r30, r5 */ // 0x8079DBC0
    r3 = *(0xc + r4); // lwz @ 0x8079DBC4
    /* lwzx r3, r3, r0 */ // 0x8079DBC8
    r0 = *(0x20 + r3); // lbz @ 0x8079DBCC
    /* stbx r0, r25, r5 */ // 0x8079DBD0
    r27 = r27 + 1; // 0x8079DBD4
    r6 = *(0x4c + r26); // lbz @ 0x8079DBD8
    /* clrlwi r0, r27, 0x18 */ // 0x8079DBDC
    if (<) goto 0x0x8079db90;
    /* li r8, 0 */ // 0x8079DBF0
    /* b 0x8079dc18 */ // 0x8079DBF4
    /* clrlwi r5, r8, 0x18 */ // 0x8079DBF8
    /* clrlwi r0, r29, 0x18 */ // 0x8079DBFC
    /* lbzx r7, r4, r5 */ // 0x8079DC00
    if (>) goto 0x0x8079dc14;
    r29 = r7;
    /* lbzx r28, r3, r5 */ // 0x8079DC10
    r8 = r8 + 1; // 0x8079DC14
    /* clrlwi r0, r8, 0x18 */ // 0x8079DC18
    if (<) goto 0x0x8079dbf8;
    r0 = *(0x3c + r26); // lbz @ 0x8079DC24
    /* lis r3, 0 */ // 0x8079DC28
    *(0x3d + r26) = r0; // stb @ 0x8079DC2C
    r0 = r28 rlwinm 2; // rlwinm
    r3 = *(0 + r3); // lwz @ 0x8079DC34
    r3 = *(0xc + r3); // lwz @ 0x8079DC38
    /* lwzx r3, r3, r0 */ // 0x8079DC3C
    r0 = *(0x26 + r3); // lbz @ 0x8079DC40
    *(0x3c + r26) = r0; // stb @ 0x8079DC44
    *(0x3e + r26) = r29; // stb @ 0x8079DC48
    *(0x3f + r26) = r28; // stb @ 0x8079DC4C
    r0 = *(0x44 + r1); // lwz @ 0x8079DC54
    return;
}