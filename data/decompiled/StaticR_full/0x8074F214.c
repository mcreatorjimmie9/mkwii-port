/* Function at 0x8074F214, size=328 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

void FUN_8074F214(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r10, 0 */ // 0x8074F21C
    *(0x48 + r1) = r30; // stw @ 0x8074F22C
    *(0x44 + r1) = r29; // stw @ 0x8074F230
    *(0x40 + r1) = r28; // stw @ 0x8074F234
    r0 = *(0xe0 + r3); // lwz @ 0x8074F238
    if (!=) goto 0x0x8074f26c;
    r4 = *(0x18 + r10); // lwz @ 0x8074F244
    /* li r0, 0 */ // 0x8074F248
    *(0x20 + r1) = r4; // stw @ 0x8074F24C
    /* li r6, 1 */ // 0x8074F258
    *(0x1c + r1) = r0; // stw @ 0x8074F25C
    /* li r7, 0 */ // 0x8074F260
    FUN_808A1444(r4, r5, r6, r7); // bl 0x808A1444
    /* b 0x8074f33c */ // 0x8074F268
    if (!=) goto 0x0x8074f29c;
    r4 = *(0x2c + r10); // lwz @ 0x8074F274
    /* li r0, 0 */ // 0x8074F278
    *(0x18 + r1) = r4; // stw @ 0x8074F27C
    /* li r6, 1 */ // 0x8074F288
    *(0x14 + r1) = r0; // stw @ 0x8074F28C
    /* li r7, 0 */ // 0x8074F290
    FUN_808A1444(r4, r5, r6, r7); // bl 0x808A1444
    /* b 0x8074f33c */ // 0x8074F298
    if (!=) goto 0x0x8074f2cc;
    r4 = *(0x3c + r10); // lwz @ 0x8074F2A4
    /* li r0, 0 */ // 0x8074F2A8
    *(0x10 + r1) = r4; // stw @ 0x8074F2AC
    /* li r6, 1 */ // 0x8074F2B8
    *(0xc + r1) = r0; // stw @ 0x8074F2BC
    /* li r7, 0 */ // 0x8074F2C0
    FUN_808A1444(r4, r5, r6, r7); // bl 0x808A1444
    /* b 0x8074f33c */ // 0x8074F2C8
    if (!=) goto 0x0x8074f33c;
    r28 = *(0x6c + r10); // lwz @ 0x8074F2E0
    r31 = *(0x78 + r10); // lwz @ 0x8074F2E4
    r29 = *(4 + r5); // lwz @ 0x8074F2EC
    r30 = *(8 + r5); // lwz @ 0x8074F2F4
    r12 = *(4 + r9); // lwz @ 0x8074F2FC
    /* li r6, 3 */ // 0x8074F300
    r11 = *(8 + r9); // lwz @ 0x8074F304
    r10 = *(0x84 + r10); // lbz @ 0x8074F308
    r9 = *(1 + r8); // lbz @ 0x8074F30C
    r0 = *(2 + r8); // lbz @ 0x8074F310
    *(0x30 + r1) = r28; // stw @ 0x8074F314
    *(0x34 + r1) = r29; // stw @ 0x8074F318
    *(0x38 + r1) = r30; // stw @ 0x8074F31C
    *(0x24 + r1) = r31; // stw @ 0x8074F320
    *(0x28 + r1) = r12; // stw @ 0x8074F324
    *(0x2c + r1) = r11; // stw @ 0x8074F328
    *(8 + r1) = r10; // stb @ 0x8074F32C
    *(9 + r1) = r9; // stb @ 0x8074F330
    *(0xa + r1) = r0; // stb @ 0x8074F334
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x54 + r1); // lwz @ 0x8074F33C
    r31 = *(0x4c + r1); // lwz @ 0x8074F340
    r30 = *(0x48 + r1); // lwz @ 0x8074F344
    r29 = *(0x44 + r1); // lwz @ 0x8074F348
    r28 = *(0x40 + r1); // lwz @ 0x8074F34C
    return;
}