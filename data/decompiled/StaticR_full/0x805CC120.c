/* Function at 0x805CC120, size=584 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 5 function(s) */

int FUN_805CC120(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x805CC12C
    r26 = r3;
    r25 = r4;
    r27 = r5;
    r0 = *(0x106 + r3); // lbz @ 0x805CC13C
    if (!=) goto 0x0x805cc354;
    /* lis r3, 0 */ // 0x805CC148
    /* li r4, 4 */ // 0x805CC14C
    r3 = *(0 + r3); // lwz @ 0x805CC150
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x805cc354;
    /* lis r3, 0 */ // 0x805CC160
    /* mulli r28, r27, 0x18 */ // 0x805CC164
    r0 = *(0 + r3); // lwz @ 0x805CC168
    r3 = r0 + r28; // 0x805CC16C
    r0 = *(0x3c4 + r3); // lbz @ 0x805CC170
    if (==) goto 0x0x805cc354;
    /* lis r3, 0 */ // 0x805CC17C
    r6 = *(0 + r3); // lwz @ 0x805CC180
    r0 = *(0x24 + r6); // lbz @ 0x805CC184
    if (>=) goto 0x0x805cc354;
    if (<) goto 0x0x805cc19c;
    /* b 0x805cc354 */ // 0x805CC198
    /* mulli r5, r25, 0xf0 */ // 0x805CC19C
    r3 = *(4 + r26); // lwz @ 0x805CC1A0
    r4 = r25 rlwinm 2; // rlwinm
    r7 = *(0xc + r3); // lwz @ 0x805CC1A8
    r0 = r27 rlwinm 2; // rlwinm
    r3 = r6 + r5; // 0x805CC1B0
    r5 = *(0xf4 + r3); // lwz @ 0x805CC1B4
    /* lwzx r30, r7, r4 */ // 0x805CC1B8
    /* lwzx r29, r7, r0 */ // 0x805CC1C0
    if (!=) goto 0x0x805cc1d0;
    /* li r31, 0 */ // 0x805CC1C8
    /* b 0x805cc1f8 */ // 0x805CC1CC
    /* mulli r0, r27, 0xf0 */ // 0x805CC1D0
    r3 = r6 + r0; // 0x805CC1D4
    r0 = *(0xf4 + r3); // lwz @ 0x805CC1D8
    if (!=) goto 0x0x805cc1ec;
    /* li r31, 0 */ // 0x805CC1E4
    /* b 0x805cc1f8 */ // 0x805CC1E8
    /* subf r0, r5, r0 */ // 0x805CC1EC
    /* cntlzw r0, r0 */ // 0x805CC1F0
    /* srwi r31, r0, 5 */ // 0x805CC1F4
    /* lis r25, 0 */ // 0x805CC1F8
    /* lis r4, 0 */ // 0x805CC1FC
    /* lis r5, 0 */ // 0x805CC200
    r7 = *(0 + r4); // lwz @ 0x805CC204
    r9 = *(0 + r5); // lwz @ 0x805CC208
    r4 = r27;
    r3 = *(0 + r25); // lwz @ 0x805CC210
    /* li r5, 1 */ // 0x805CC214
    /* li r6, 1 */ // 0x805CC218
    /* li r8, 1 */ // 0x805CC21C
    FUN_808F9C40(r4, r5, r6, r8); // bl 0x808F9C40
    r0 = *(0 + r25); // lwz @ 0x805CC224
    r3 = r0 + r28; // 0x805CC228
    r0 = *(0x3c4 + r3); // lbz @ 0x805CC22C
    if (!=) goto 0x0x805cc250;
    /* lis r3, 0 */ // 0x805CC238
    r4 = r27;
    r3 = *(0 + r3); // lwz @ 0x805CC240
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    FUN_8061DFF8(r3, r4); // bl 0x8061DFF8
    FUN_8060EFB4(r3, r4); // bl 0x8060EFB4
    if (==) goto 0x0x805cc2a4;
    r3 = *(4 + r26); // lwz @ 0x805CC258
    r0 = *(0x22 + r30); // lhz @ 0x805CC25C
    r3 = *(0x3c + r3); // lwz @ 0x805CC260
    r3 = *(4 + r3); // lwz @ 0x805CC264
    r3 = *(0x1d0 + r3); // lha @ 0x805CC268
    /* add. r0, r3, r0 */ // 0x805CC26C
    if (>=) goto 0x0x805cc278;
    /* li r0, 0 */ // 0x805CC274
    *(0x22 + r30) = r0; // sth @ 0x805CC278
    r3 = *(4 + r26); // lwz @ 0x805CC27C
    r0 = *(0x22 + r29); // lhz @ 0x805CC280
    r3 = *(0x3c + r3); // lwz @ 0x805CC284
    r3 = *(4 + r3); // lwz @ 0x805CC288
    r3 = *(0x1d2 + r3); // lha @ 0x805CC28C
    /* add. r0, r3, r0 */ // 0x805CC290
    if (>=) goto 0x0x805cc29c;
    /* li r0, 0 */ // 0x805CC298
    *(0x22 + r29) = r0; // sth @ 0x805CC29C
    /* b 0x805cc2ec */ // 0x805CC2A0
    r3 = *(4 + r26); // lwz @ 0x805CC2A4
    r0 = *(0x22 + r30); // lhz @ 0x805CC2A8
    r3 = *(0x3c + r3); // lwz @ 0x805CC2AC
    r3 = *(4 + r3); // lwz @ 0x805CC2B0
    r3 = *(0x1c8 + r3); // lha @ 0x805CC2B4
    /* add. r0, r3, r0 */ // 0x805CC2B8
    if (>=) goto 0x0x805cc2c4;
    /* li r0, 0 */ // 0x805CC2C0
    *(0x22 + r30) = r0; // sth @ 0x805CC2C4
    r3 = *(4 + r26); // lwz @ 0x805CC2C8
    r0 = *(0x22 + r29); // lhz @ 0x805CC2CC
    r3 = *(0x3c + r3); // lwz @ 0x805CC2D0
    r3 = *(4 + r3); // lwz @ 0x805CC2D4
    r3 = *(0x1ce + r3); // lha @ 0x805CC2D8
    /* add. r0, r3, r0 */ // 0x805CC2DC
    if (>=) goto 0x0x805cc2e8;
    /* li r0, 0 */ // 0x805CC2E4
    *(0x22 + r29) = r0; // sth @ 0x805CC2E8
    /* lis r3, 0 */ // 0x805CC2EC
    r0 = *(0 + r3); // lwz @ 0x805CC2F0
    r3 = r0 + r28; // 0x805CC2F4
    r0 = *(0x3c4 + r3); // lbz @ 0x805CC2F8
    if (!=) goto 0x0x805cc354;
    if (!=) goto 0x0x805cc354;
    r3 = *(4 + r26); // lwz @ 0x805CC30C
    r0 = *(0x22 + r30); // lhz @ 0x805CC310
    r3 = *(0x3c + r3); // lwz @ 0x805CC314
    r3 = *(4 + r3); // lwz @ 0x805CC318
    r3 = *(0x1ca + r3); // lha @ 0x805CC31C
    /* add. r0, r3, r0 */ // 0x805CC320
    if (>=) goto 0x0x805cc32c;
    /* li r0, 0 */ // 0x805CC328
    *(0x22 + r30) = r0; // sth @ 0x805CC32C
    r3 = *(4 + r26); // lwz @ 0x805CC330
    r0 = *(0x22 + r29); // lhz @ 0x805CC334
    r3 = *(0x3c + r3); // lwz @ 0x805CC338
    r3 = *(4 + r3); // lwz @ 0x805CC33C
    r3 = *(0x1cc + r3); // lha @ 0x805CC340
    /* add. r0, r3, r0 */ // 0x805CC344
    if (>=) goto 0x0x805cc350;
    /* li r0, 0 */ // 0x805CC34C
    *(0x22 + r29) = r0; // sth @ 0x805CC350
    r0 = *(0x34 + r1); // lwz @ 0x805CC358
    return;
}