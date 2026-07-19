/* Function at 0x8075A1E8, size=340 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8075A1E8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r6, 0 */ // 0x8075A1F0
    /* li r7, 0 */ // 0x8075A1F4
    *(0x14 + r1) = r0; // stw @ 0x8075A1F8
    *(0xc + r1) = r31; // stw @ 0x8075A1FC
    r10 = *(0xb0 + r3); // lwz @ 0x8075A200
    /* mtctr r10 */ // 0x8075A204
    if (<=) goto 0x0x8075a234;
    r5 = *(0xbc + r3); // lwz @ 0x8075A210
    /* lwzx r5, r5, r7 */ // 0x8075A214
    r0 = *(0xb0 + r5); // lbz @ 0x8075A218
    if (!=) goto 0x0x8075a228;
    /* b 0x8075a238 */ // 0x8075A224
    r7 = r7 + 4; // 0x8075A228
    r6 = r6 + 1; // 0x8075A22C
    if (counter-- != 0) goto 0x0x8075a210;
    /* li r6, -1 */ // 0x8075A234
    if (==) goto 0x0x8075a328;
    r5 = *(0xcc + r3); // lwz @ 0x8075A240
    /* slwi r0, r4, 2 */ // 0x8075A244
    /* lfs f0, 0x128(r3) */ // 0x8075A248
    /* li r8, 0 */ // 0x8075A24C
    /* lwzx r5, r5, r0 */ // 0x8075A250
    /* lfs f1, 0x1c8(r5) */ // 0x8075A254
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8075A258
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8075A25C
    if (!=) goto 0x0x8075a278;
    /* lis r5, 0 */ // 0x8075A264
    /* lfs f0, 0(r5) */ // 0x8075A268
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8075A26C
    if (<=) goto 0x0x8075a278;
    /* li r8, 1 */ // 0x8075A274
    /* li r7, 0 */ // 0x8075A278
    /* li r9, 0 */ // 0x8075A27C
    /* mtctr r10 */ // 0x8075A280
    if (<=) goto 0x0x8075a2b0;
    r5 = *(0xbc + r3); // lwz @ 0x8075A28C
    /* lwzx r5, r5, r9 */ // 0x8075A290
    r0 = *(0xb4 + r5); // lwz @ 0x8075A294
    if (!=) goto 0x0x8075a2a4;
    /* b 0x8075a2b4 */ // 0x8075A2A0
    r9 = r9 + 4; // 0x8075A2A4
    r7 = r7 + 1; // 0x8075A2A8
    if (counter-- != 0) goto 0x0x8075a28c;
    /* li r7, -1 */ // 0x8075A2B0
    r0 = r7 + 1; // 0x8075A2B4
    /* cntlzw r0, r0 */ // 0x8075A2BC
    /* srwi r0, r0, 5 */ // 0x8075A2C0
    if (==) goto 0x0x8075a328;
    if (==) goto 0x0x8075a328;
    r7 = *(0xbc + r3); // lwz @ 0x8075A2D0
    /* slwi r0, r6, 2 */ // 0x8075A2D4
    /* lis r6, 0 */ // 0x8075A2D8
    /* lis r5, 0 */ // 0x8075A2DC
    /* lwzx r7, r7, r0 */ // 0x8075A2E0
    /* lfs f1, 0(r6) */ // 0x8075A2E4
    *(0xb4 + r7) = r4; // stw @ 0x8075A2E8
    /* li r4, 0 */ // 0x8075A2EC
    /* lfs f2, 0(r5) */ // 0x8075A2F0
    r3 = *(0xbc + r3); // lwz @ 0x8075A2F4
    /* lwzx r31, r3, r0 */ // 0x8075A2F8
    r3 = *(8 + r31); // lwz @ 0x8075A2FC
    r3 = *(0x28 + r3); // lwz @ 0x8075A300
    FUN_805E70EC(); // bl 0x805E70EC
    /* li r0, 1 */ // 0x8075A308
    *(0xb0 + r31) = r0; // stb @ 0x8075A30C
    r3 = r31;
    /* li r4, 1 */ // 0x8075A314
    r12 = *(0 + r31); // lwz @ 0x8075A318
    r12 = *(0x68 + r12); // lwz @ 0x8075A31C
    /* mtctr r12 */ // 0x8075A320
    /* bctrl  */ // 0x8075A324
    r0 = *(0x14 + r1); // lwz @ 0x8075A328
    r31 = *(0xc + r1); // lwz @ 0x8075A32C
    return;
}