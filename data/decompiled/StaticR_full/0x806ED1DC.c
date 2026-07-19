/* Function at 0x806ED1DC, size=320 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r18 */
/* Calls: 4 function(s) */

int FUN_806ED1DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r18 */
    /* stmw r18, 8(r1) */ // 0x806ED1E8
    r18 = r3;
    r26 = r3 + 0x40; // 0x806ED1F0
    /* li r19, 0 */ // 0x806ED1F4
    /* lis r28, -0x8000 */ // 0x806ED1F8
    /* lis r29, 0x1062 */ // 0x806ED1FC
    /* lis r30, 0 */ // 0x806ED200
    /* li r31, 1 */ // 0x806ED204
    r4 = *(0 + r30); // lwz @ 0x806ED208
    /* clrlwi r0, r19, 0x18 */ // 0x806ED20C
    r25 = r31 << r0; // slw
    r0 = *(0x291c + r4); // lwz @ 0x806ED214
    /* mulli r0, r0, 0x58 */ // 0x806ED218
    r3 = r4 + r0; // 0x806ED21C
    r0 = *(0x48 + r3); // lwz @ 0x806ED220
    /* and. r0, r25, r0 */ // 0x806ED224
    if (==) goto 0x0x806ed3c8;
    r0 = *(0x59 + r3); // lbz @ 0x806ED22C
    if (==) goto 0x0x806ed3c8;
    r22 = r19 rlwinm 5; // rlwinm
    r20 = r19 rlwinm 2; // rlwinm
    r3 = r4 + r22; // 0x806ED240
    r3 = *(0x27a8 + r3); // lwz @ 0x806ED244
    r0 = r20 + r4; // 0x806ED248
    /* mulli r3, r3, 0x30 */ // 0x806ED24C
    r3 = r3 + r0; // 0x806ED250
    r3 = *(0x150 + r3); // lwz @ 0x806ED254
    r27 = *(0xc + r3); // lwz @ 0x806ED258
    r0 = *(8 + r27); // lwz @ 0x806ED25C
    if (!=) goto 0x0x806ed33c;
    FUN_805E3430(); // bl 0x805E3430
    r0 = r19 rlwinm 3; // rlwinm
    /* li r5, 0x38 */ // 0x806ED270
    r21 = r18 + r0; // 0x806ED274
    *(0x2f4 + r21) = r4; // stw @ 0x806ED278
    *(0x2f0 + r21) = r3; // stw @ 0x806ED27C
    r3 = r26;
    r0 = *(0x3e0 + r18); // lwz @ 0x806ED284
    r0 = r0 | r25; // 0x806ED288
    *(0x3e0 + r18) = r0; // stw @ 0x806ED28C
    r4 = *(0 + r27); // lwz @ 0x806ED290
    FUN_805E3430(r3); // bl 0x805E3430
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r0, r19, 0x18 */ // 0x806ED29C
    /* mulli r0, r0, 0x38 */ // 0x806ED2A0
    r6 = r18 + r0; // 0x806ED2A4
    r0 = *(0x40 + r6); // lwz @ 0x806ED2A8
    r5 = *(0x44 + r6); // lwz @ 0x806ED2AC
    /* or. r0, r5, r0 */ // 0x806ED2B0
    if (==) goto 0x0x806ed334;
    r24 = *(0x48 + r6); // lwz @ 0x806ED2B8
    r23 = *(0x4c + r6); // lwz @ 0x806ED2BC
    /* or. r0, r23, r24 */ // 0x806ED2C0
    if (==) goto 0x0x806ed334;
    r0 = *(0xf8 + r28); // lwz @ 0x806ED2C8
    r6 = r29 + 0x4dd3; // 0x806ED2CC
    /* li r5, 0 */ // 0x806ED2D0
    /* srwi r0, r0, 2 */ // 0x806ED2D4
    r0 = r6 * r0; // 0x806ED2D8
    /* srwi r6, r0, 6 */ // 0x806ED2DC
    FUN_805E3430(r6, r5); // bl 0x805E3430
    /* subfc r0, r23, r4 */ // 0x806ED2E4
    /* subfe r0, r24, r3 */ // 0x806ED2E8
    /* subfe r0, r4, r4 */ // 0x806ED2EC
    /* neg. r0, r0 */ // 0x806ED2F0
    if (!=) goto 0x0x806ed334;
    /* subfc r0, r23, r4 */ // 0x806ED2F8
    r4 = *(0x350 + r21); // lwz @ 0x806ED2FC
    /* subfe r3, r24, r3 */ // 0x806ED300
    r5 = *(0x354 + r21); // lwz @ 0x806ED304
    /* rotlwi r0, r0, 0x1f */ // 0x806ED308
    r6 = r18 + r20; // 0x806ED30C
    r0 = r3 rlwimi 0x1f; // rlwimi
    /* srwi r3, r3, 1 */ // 0x806ED314
    /* addc r0, r5, r0 */ // 0x806ED318
}