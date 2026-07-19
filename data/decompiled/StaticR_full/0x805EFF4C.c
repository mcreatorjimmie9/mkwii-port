/* Function at 0x805EFF4C, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805EFF4C(int r3, int r4, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r7, 0 */ // 0x805EFF54
    *(0x24 + r1) = r0; // stw @ 0x805EFF58
    r7 = r7 + 0; // 0x805EFF5C
    r6 = r7 + 8; // 0x805EFF60
    /* li r0, 2 */ // 0x805EFF64
    /* stmw r27, 0xc(r1) */ // 0x805EFF68
    /* lis r31, 0 */ // 0x805EFF6C
    r27 = r3;
    r28 = r4;
    r31 = r31 + 0; // 0x805EFF78
    /* li r30, 0 */ // 0x805EFF7C
    *(0 + r3) = r4; // stw @ 0x805EFF80
    *(4 + r3) = r5; // stw @ 0x805EFF84
    *(0xc + r3) = r7; // stw @ 0x805EFF88
    *(8 + r3) = r6; // stw @ 0x805EFF8C
    *(0x10 + r3) = r0; // stw @ 0x805EFF90
    r0 = r30 rlwinm 2; // rlwinm
    r3 = r28 + r0; // 0x805EFF9C
    r3 = *(0x14 + r3); // lwz @ 0x805EFFA0
    r0 = r27;
    r29 = *(0 + r3); // lwz @ 0x805EFFA8
    if (==) goto 0x0x805effb4;
    r0 = r27 + 8; // 0x805EFFB0
    *(0xd4 + r29) = r0; // stw @ 0x805EFFB4
    r3 = r29;
    /* li r4, 1 */ // 0x805EFFBC
    FUN_805E3430(r3, r4); // bl 0x805E3430
}