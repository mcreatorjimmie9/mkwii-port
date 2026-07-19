/* Function at 0x805ED274, size=360 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */

int FUN_805ED274(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* li r5, 0 */ // 0x805ED27C
    *(0x24 + r1) = r0; // stw @ 0x805ED280
    /* stmw r26, 8(r1) */ // 0x805ED284
    r29 = r3;
    r30 = r4;
    r6 = *(4 + r3); // lwz @ 0x805ED290
    /* rlwinm. r0, r6, 0, 0xa, 0xa */ // 0x805ED294
    if (==) goto 0x0x805ed2a8;
    /* rlwinm. r0, r6, 0, 5, 5 */ // 0x805ED29C
    if (==) goto 0x0x805ed2a8;
    /* li r5, 1 */ // 0x805ED2A4
    if (==) goto 0x0x805ed3bc;
    r7 = *(8 + r3); // lhz @ 0x805ED2B0
    /* rlwinm. r0, r7, 0, 0x10, 0x10 */ // 0x805ED2B4
    if (!=) goto 0x0x805ed3bc;
    r0 = *(0x44 + r3); // lwz @ 0x805ED2BC
    /* li r31, 0 */ // 0x805ED2C0
    r5 = r0 + r4; // 0x805ED2C4
    r0 = *(0x20 + r5); // lbz @ 0x805ED2C8
    /* clrlwi. r0, r0, 0x1f */ // 0x805ED2CC
    if (==) goto 0x0x805ed2d8;
    /* li r31, 1 */ // 0x805ED2D4
    /* andi. r0, r6, 0x320 */ // 0x805ED2D8
    if (==) goto 0x0x805ed300;
    r3 = *(0x48 + r3); // lwz @ 0x805ED2E0
    /* li r0, 1 */ // 0x805ED2E4
    r0 = r0 << r4; // slw
    r3 = *(4 + r3); // lhz @ 0x805ED2EC
    /* clrlwi r0, r0, 0x10 */ // 0x805ED2F0
    /* and. r0, r3, r0 */ // 0x805ED2F4
    if (==) goto 0x0x805ed300;
    /* li r31, 1 */ // 0x805ED2FC
    if (==) goto 0x0x805ed314;
    r0 = r7 rlwinm 0x12; // rlwinm
    if (==) goto 0x0x805ed37c;
    /* cntlzw r0, r31 */ // 0x805ED314
    r28 = r29;
    /* srwi r27, r0, 5 */ // 0x805ED31C
    /* li r26, 0 */ // 0x805ED320
    r12 = *(0 + r29); // lwz @ 0x805ED324
    r3 = r29;
    r4 = *(0x14 + r28); // lwz @ 0x805ED32C
    r5 = r27;
    r12 = *(0x20 + r12); // lwz @ 0x805ED334
    /* li r6, 1 */ // 0x805ED338
    r4 = *(0 + r4); // lwz @ 0x805ED33C
    /* mtctr r12 */ // 0x805ED340
    /* bctrl  */ // 0x805ED344
    r26 = r26 + 1; // 0x805ED348
    r28 = r28 + 4; // 0x805ED34C
    if (<) goto 0x0x805ed324;
    if (==) goto 0x0x805ed370;
    r0 = *(8 + r29); // lhz @ 0x805ED360
    r0 = r0 | 0x4000; // 0x805ED364
    *(8 + r29) = r0; // sth @ 0x805ED368
    /* b 0x805ed37c */ // 0x805ED36C
    r0 = *(8 + r29); // lhz @ 0x805ED370
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r29) = r0; // sth @ 0x805ED378
    if (==) goto 0x0x805ed3a0;
    /* li r0, 1 */ // 0x805ED384
    r3 = *(8 + r29); // lhz @ 0x805ED388
    r0 = r0 << r30; // slw
    /* clrlwi r0, r0, 0x10 */ // 0x805ED390
    r0 = r3 | r0; // 0x805ED394
    *(8 + r29) = r0; // sth @ 0x805ED398
    /* b 0x805ed3c8 */ // 0x805ED39C
    /* li r0, 1 */ // 0x805ED3A0
    r3 = *(8 + r29); // lhz @ 0x805ED3A4
    r0 = r0 << r30; // slw
    /* clrlwi r0, r0, 0x10 */ // 0x805ED3AC
    /* andc r0, r3, r0 */ // 0x805ED3B0
    *(8 + r29) = r0; // sth @ 0x805ED3B4
    /* b 0x805ed3c8 */ // 0x805ED3B8
    r0 = *(8 + r3); // lhz @ 0x805ED3BC
    r0 = r0 | 0x4000; // 0x805ED3C0
    *(8 + r3) = r0; // sth @ 0x805ED3C4
    r0 = *(0x24 + r1); // lwz @ 0x805ED3CC
    return;
}