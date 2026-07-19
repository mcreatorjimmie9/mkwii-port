/* Function at 0x808F9D4C, size=376 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r18 */
/* Calls: 2 function(s) */

int FUN_808F9D4C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r18 */
    *(0x44 + r1) = r0; // stw @ 0x808F9D58
    /* stmw r18, 8(r1) */ // 0x808F9D5C
    r19 = r3;
    r20 = r4;
    r21 = r5;
    r22 = r8;
    if (==) goto 0x0x808f9eb0;
    /* mulli r8, r4, 0x18 */ // 0x808F9D74
    r4 = r3 + r8; // 0x808F9D78
    r0 = *(0x3c4 + r4); // lbz @ 0x808F9D7C
    if (==) goto 0x0x808f9eb0;
    /* mulli r5, r5, 0x18 */ // 0x808F9D88
    r0 = *(0x4e4 + r3); // lwz @ 0x808F9D8C
    r26 = r0 + r6; // 0x808F9D90
    r4 = r3 + r5; // 0x808F9D94
    r0 = *(0x3c4 + r4); // lbz @ 0x808F9D98
    if (>) goto 0x0x808f9da8;
    r7 = r0;
    r29 = r3 + r5; // 0x808F9DA8
    r28 = r3 + r8; // 0x808F9DAC
    /* clrlwi r18, r7, 0x18 */ // 0x808F9DB0
    /* li r25, 0 */ // 0x808F9DB4
    /* li r30, 5 */ // 0x808F9DB8
    /* li r31, 0 */ // 0x808F9DBC
    /* b 0x808f9ea4 */ // 0x808F9DC0
    r3 = *(0x3c4 + r29); // lbz @ 0x808F9DC4
    /* li r5, 0 */ // 0x808F9DC8
    r4 = *(2 + r19); // lbz @ 0x808F9DCC
    r0 = r3 + -1; // 0x808F9DD0
    /* clrlwi r24, r0, 0x18 */ // 0x808F9DD4
    /* b 0x808f9e94 */ // 0x808F9DD8
    r0 = r5 rlwinm 3; // rlwinm
    r27 = r19 + r0; // 0x808F9DE0
    r0 = *(9 + r27); // lbz @ 0x808F9DE4
    if (!=) goto 0x0x808f9e90;
    r0 = *(0xa + r27); // lbz @ 0x808F9DF0
    if (!=) goto 0x0x808f9e90;
    r23 = *(0x3c4 + r28); // lbz @ 0x808F9DFC
    if (>=) goto 0x0x808f9e4c;
    /* clrlwi r0, r25, 0x18 */ // 0x808F9E08
    r3 = *(4 + r27); // lwz @ 0x808F9E0C
    r0 = r0 * r22; // 0x808F9E10
    r5 = r20;
    r6 = r23;
    r4 = r26 + r0; // 0x808F9E1C
    FUN_8090F268(r5, r6); // bl 0x8090F268
    *(9 + r27) = r20; // stb @ 0x808F9E24
    r0 = r23 rlwinm 2; // rlwinm
    r3 = r28 + r0; // 0x808F9E2C
    *(0xa + r27) = r23; // stb @ 0x808F9E30
    r0 = *(4 + r27); // lwz @ 0x808F9E34
    *(0x3c8 + r3) = r0; // stw @ 0x808F9E38
    r3 = *(0x3c4 + r28); // lbz @ 0x808F9E3C
    r0 = r3 + 1; // 0x808F9E40
    *(0x3c4 + r28) = r0; // stb @ 0x808F9E44
    /* b 0x808f9e74 */ // 0x808F9E48
    /* clrlwi r0, r25, 0x18 */ // 0x808F9E4C
    r3 = *(4 + r27); // lwz @ 0x808F9E50
    r0 = r0 * r22; // 0x808F9E54
    /* li r5, 1 */ // 0x808F9E58
    /* li r6, 1 */ // 0x808F9E5C
    r4 = r26 + r0; // 0x808F9E60
    FUN_8090F434(r5, r6); // bl 0x8090F434
    r0 = *(0 + r19); // lbz @ 0x808F9E68
    *(9 + r27) = r0; // stb @ 0x808F9E6C
    *(0xa + r27) = r30; // stb @ 0x808F9E70
    r0 = r24 rlwinm 2; // rlwinm
    r3 = r29 + r0; // 0x808F9E78
    *(0x3c8 + r3) = r31; // stw @ 0x808F9E7C
    r3 = *(0x3c4 + r29); // lbz @ 0x808F9E80
    r0 = r3 + -1; // 0x808F9E84
    *(0x3c4 + r29) = r0; // stb @ 0x808F9E88
    /* b 0x808f9ea0 */ // 0x808F9E8C
    r5 = r5 + 1; // 0x808F9E90
    /* clrlwi r0, r5, 0x18 */ // 0x808F9E94
    if (<) goto 0x0x808f9ddc;
    r25 = r25 + 1; // 0x808F9EA0
    /* clrlwi r0, r25, 0x18 */ // 0x808F9EA4
    if (<) goto 0x0x808f9dc4;
    r0 = *(0x44 + r1); // lwz @ 0x808F9EB4
    return;
}