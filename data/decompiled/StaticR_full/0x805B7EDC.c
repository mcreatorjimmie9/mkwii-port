/* Function at 0x805B7EDC, size=512 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r20 */
/* Calls: 4 function(s) */

int FUN_805B7EDC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r20 */
    /* lis r7, 0 */ // 0x805B7EE4
    *(0x44 + r1) = r0; // stw @ 0x805B7EE8
    /* stmw r20, 0x10(r1) */ // 0x805B7EEC
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    /* li r28, 0 */ // 0x805B7F00
    r3 = *(0 + r7); // lwz @ 0x805B7F04
    /* addis r3, r3, 2 */ // 0x805B7F08
    r3 = *(0x4ffc + r3); // lwz @ 0x805B7F0C
    /* addis r3, r3, 2 */ // 0x805B7F10
    r0 = *(0x330c + r3); // lwz @ 0x805B7F14
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x805B7F18
    if (!=) goto 0x0x805b7f28;
    /* li r3, 0 */ // 0x805B7F20
    /* b 0x805b81b0 */ // 0x805B7F24
    /* li r27, 0 */ // 0x805B7F2C
    /* li r31, 0 */ // 0x805B7F30
    r3 = *(0xc + r25); // lwz @ 0x805B7F34
    r30 = r27 rlwinm 1; // rlwinm
    /* sthx r31, r29, r30 */ // 0x805B7F3C
    if (!=) goto 0x0x805b7f54;
    /* clrlwi r0, r27, 0x18 */ // 0x805B7F48
    if (==) goto 0x0x805b7fd0;
    if (!=) goto 0x0x805b7f64;
    /* clrlwi. r0, r27, 0x18 */ // 0x805B7F5C
    if (==) goto 0x0x805b7fd0;
    r0 = *(6 + r25); // lbz @ 0x805B7F64
    if (==) goto 0x0x805b7fc0;
    /* clrlwi r0, r27, 0x18 */ // 0x805B7F70
    /* li r22, 0 */ // 0x805B7F74
    /* mulli r0, r0, 0xd */ // 0x805B7F78
    /* li r21, 0 */ // 0x805B7F7C
    r20 = r25 + r0; // 0x805B7F80
    r3 = *(0x1e + r20); // lbz @ 0x805B7F84
    FUN_805E3430(); // bl 0x805E3430
    r21 = r21 + 1; // 0x805B7F8C
    r0 = r22 + r3; // 0x805B7F90
    r20 = r20 + 1; // 0x805B7F98
    /* clrlwi r22, r0, 0x10 */ // 0x805B7F9C
    if (<) goto 0x0x805b7f84;
    /* clrlwi r0, r27, 0x18 */ // 0x805B7FA4
    /* clrlwi r4, r22, 0x18 */ // 0x805B7FA8
    r3 = r23 + r0; // 0x805B7FAC
    r0 = *(0x260 + r3); // lbz @ 0x805B7FB0
    /* subf r0, r4, r0 */ // 0x805B7FB4
    /* sthx r0, r29, r30 */ // 0x805B7FB8
    /* b 0x805b7fd0 */ // 0x805B7FBC
    /* clrlwi r0, r27, 0x18 */ // 0x805B7FC0
    r3 = r23 + r0; // 0x805B7FC4
    r0 = *(0x260 + r3); // lbz @ 0x805B7FC8
    /* sthx r0, r29, r30 */ // 0x805B7FCC
    r27 = r27 + 1; // 0x805B7FD0
    if (<) goto 0x0x805b7f34;
    r3 = *(0xc + r1); // lhz @ 0x805B7FDC
    r0 = *(0xe + r1); // lhz @ 0x805B7FE0
    r0 = r3 + r0; // 0x805B7FE4
    /* clrlwi. r4, r0, 0x10 */ // 0x805B7FE8
    if (!=) goto 0x0x805b7ff8;
    /* li r3, 0 */ // 0x805B7FF0
    /* b 0x805b81b0 */ // 0x805B7FF4
    r3 = r26;
    FUN_805E364C(r3, r3); // bl 0x805E364C
    r4 = *(0xc + r1); // lhz @ 0x805B8000
    /* li r27, 0 */ // 0x805B8004
    r0 = *(6 + r25); // lbz @ 0x805B8008
    /* subf r5, r4, r3 */ // 0x805B800C
    /* orc r4, r3, r4 */ // 0x805B8010
    /* srwi r3, r5, 1 */ // 0x805B8014
    /* subf r0, r3, r4 */ // 0x805B801C
    /* srwi r30, r0, 0x1f */ // 0x805B8020
    if (==) goto 0x0x805b80b0;
    /* slwi r0, r30, 1 */ // 0x805B8028
    /* lhzx r29, r3, r0 */ // 0x805B8030
    if (==) goto 0x0x805b80d4;
    r3 = r26;
    r4 = r29;
    FUN_805E364C(r3, r4); // bl 0x805E364C
    /* mulli r0, r30, 0xd */ // 0x805B8048
    r4 = r23 + r30; // 0x805B804C
    r8 = *(0x260 + r4); // lbz @ 0x805B8050
    /* li r9, 0 */ // 0x805B8054
    /* li r27, 0 */ // 0x805B8058
    r7 = r25 + r0; // 0x805B805C
    /* li r10, 0 */ // 0x805B8060
    /* li r6, 1 */ // 0x805B8064
    /* b 0x805b80a0 */ // 0x805B8068
    r0 = r10 rlwinm 0x1d; // rlwinm
    /* clrlwi r5, r10, 0x1d */ // 0x805B8070
    r4 = r7 + r0; // 0x805B8074
    r0 = *(0x1e + r4); // lbz @ 0x805B8078
    r4 = r6 << r5; // slw
    /* and. r0, r4, r0 */ // 0x805B8080
    if (!=) goto 0x0x805b8090;
    /* clrlwi r27, r10, 0x18 */ // 0x805B8088
    r9 = r9 + 1; // 0x805B808C
    /* clrlwi r0, r9, 0x10 */ // 0x805B8090
    if (>) goto 0x0x805b80d4;
    /* clrlwi r0, r10, 0x18 */ // 0x805B80A0
    if (<) goto 0x0x805b806c;
    /* b 0x805b80d4 */ // 0x805B80AC
    /* slwi r0, r30, 1 */ // 0x805B80B0
    /* lhzx r29, r3, r0 */ // 0x805B80B8
    if (==) goto 0x0x805b80d4;
    r3 = r26;
    r4 = r29;
    FUN_805E364C(r3, r4); // bl 0x805E364C
    /* clrlwi r27, r3, 0x10 */ // 0x805B80D0
    if (==) goto 0x0x805b81ac;
}