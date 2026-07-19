/* Function at 0x805ED168, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_805ED168(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* li r4, 0 */ // 0x805ED170
    *(0x24 + r1) = r0; // stw @ 0x805ED174
    /* stmw r27, 0xc(r1) */ // 0x805ED178
    r30 = r3;
    r6 = *(4 + r3); // lwz @ 0x805ED180
    /* rlwinm. r0, r6, 0, 0xa, 0xa */ // 0x805ED184
    if (==) goto 0x0x805ed198;
    /* rlwinm. r0, r6, 0, 5, 5 */ // 0x805ED18C
    if (==) goto 0x0x805ed198;
    /* li r4, 1 */ // 0x805ED194
    if (==) goto 0x0x805ed260;
    r4 = *(0x44 + r3); // lwz @ 0x805ED1A0
    /* lis r5, 0x101 */ // 0x805ED1A4
    r5 = r5 + 0x101; // 0x805ED1A8
    /* li r31, 0 */ // 0x805ED1AC
    r0 = *(0x20 + r4); // lwz @ 0x805ED1B0
    /* andc. r0, r5, r0 */ // 0x805ED1B4
    if (!=) goto 0x0x805ed1c0;
    /* li r31, 1 */ // 0x805ED1BC
    /* andi. r0, r6, 0x320 */ // 0x805ED1C0
    if (==) goto 0x0x805ed1e0;
    r4 = *(0x48 + r3); // lwz @ 0x805ED1C8
    r0 = *(4 + r4); // lhz @ 0x805ED1CC
    r0 = r0 ~| r0; // 0x805ED1D0
    /* clrlwi. r0, r0, 0x1c */ // 0x805ED1D4
    if (!=) goto 0x0x805ed1e0;
    /* li r31, 1 */ // 0x805ED1DC
    r0 = *(8 + r3); // lhz @ 0x805ED1E0
    r0 = r0 rlwinm 0x11; // rlwinm
    if (==) goto 0x0x805ed260;
    /* cntlzw r0, r31 */ // 0x805ED1F0
    r29 = r30;
    /* srwi r28, r0, 5 */ // 0x805ED1F8
    /* li r27, 0 */ // 0x805ED1FC
    r12 = *(0 + r30); // lwz @ 0x805ED200
    r3 = r30;
    r4 = *(0x14 + r29); // lwz @ 0x805ED208
    r5 = r28;
    r12 = *(0x20 + r12); // lwz @ 0x805ED210
    /* li r6, 0 */ // 0x805ED214
    r4 = *(0 + r4); // lwz @ 0x805ED218
    /* mtctr r12 */ // 0x805ED21C
    /* bctrl  */ // 0x805ED220
    r27 = r27 + 1; // 0x805ED224
    r29 = r29 + 4; // 0x805ED228
    if (<) goto 0x0x805ed200;
    if (==) goto 0x0x805ed24c;
    r0 = *(8 + r30); // lhz @ 0x805ED23C
    r0 = r0 | 0x800f; // 0x805ED240
    *(8 + r30) = r0; // sth @ 0x805ED244
    /* b 0x805ed260 */ // 0x805ED248
    r0 = *(8 + r30); // lhz @ 0x805ED24C
    r3 = r0 rlwinm 0; // rlwinm
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r3 | r0; // 0x805ED258
    *(8 + r30) = r0; // sth @ 0x805ED25C
    r0 = *(0x24 + r1); // lwz @ 0x805ED264
    return;
}