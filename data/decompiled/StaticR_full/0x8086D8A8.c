/* Function at 0x8086D8A8, size=312 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8086D8A8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r0 = *(0 + r3); // lwz @ 0x8086D8B8
    if (>) goto 0x0x8086d9cc;
    /* li r0, 0x9f */ // 0x8086D8C4
    *(0 + r3) = r0; // stw @ 0x8086D8C8
    /* lis r5, 0 */ // 0x8086D8CC
    /* lis r6, 0 */ // 0x8086D8D0
    *(8 + r3) = r4; // stb @ 0x8086D8D4
    r9 = r4 rlwinm 2; // rlwinm
    /* mulli r0, r4, 0xf0 */ // 0x8086D8DC
    /* li r4, 0 */ // 0x8086D8E0
    r7 = *(0 + r5); // lwz @ 0x8086D8E4
    /* li r11, 0 */ // 0x8086D8E8
    r29 = *(0 + r6); // lbz @ 0x8086D8EC
    /* li r12, 1 */ // 0x8086D8F0
    r6 = *(0xc + r7); // lwz @ 0x8086D8F4
    /* lis r10, 0 */ // 0x8086D8F8
    /* lis r7, 0 */ // 0x8086D8FC
    /* lis r8, 0 */ // 0x8086D900
    /* lwzx r6, r6, r9 */ // 0x8086D904
    r31 = *(0x20 + r6); // lbz @ 0x8086D908
    /* mtctr r29 */ // 0x8086D90C
    if (<=) goto 0x0x8086d9c4;
    r29 = r3 + r4; // 0x8086D918
    *(9 + r29) = r12; // stb @ 0x8086D91C
    r6 = *(8 + r3); // lbz @ 0x8086D920
    if (!=) goto 0x0x8086d930;
    *(9 + r29) = r11; // stb @ 0x8086D92C
    r6 = *(0 + r10); // lbz @ 0x8086D930
    if (!=) goto 0x0x8086d95c;
    r9 = *(0 + r5); // lwz @ 0x8086D93C
    r6 = r4 rlwinm 2; // rlwinm
    r9 = *(0xc + r9); // lwz @ 0x8086D944
    /* lwzx r6, r9, r6 */ // 0x8086D948
    r6 = *(0x20 + r6); // lbz @ 0x8086D94C
    if (<=) goto 0x0x8086d95c;
    *(9 + r29) = r11; // stb @ 0x8086D958
    r6 = *(0 + r8); // lbz @ 0x8086D95C
    if (==) goto 0x0x8086d9bc;
    /* clrlwi r6, r4, 0x18 */ // 0x8086D968
    r9 = *(0 + r7); // lwz @ 0x8086D96C
    /* mulli r6, r6, 0xf0 */ // 0x8086D970
    r6 = r9 + r6; // 0x8086D974
    r30 = *(0xf4 + r6); // lwz @ 0x8086D978
    if (!=) goto 0x0x8086d98c;
    /* li r6, 0 */ // 0x8086D984
    /* b 0x8086d9b0 */ // 0x8086D988
    r6 = r9 + r0; // 0x8086D98C
    r6 = *(0xf4 + r6); // lwz @ 0x8086D990
    if (!=) goto 0x0x8086d9a4;
    /* li r6, 0 */ // 0x8086D99C
    /* b 0x8086d9b0 */ // 0x8086D9A0
    /* subf r6, r30, r6 */ // 0x8086D9A4
    /* cntlzw r6, r6 */ // 0x8086D9A8
    /* srwi r6, r6, 5 */ // 0x8086D9AC
    if (==) goto 0x0x8086d9bc;
    *(9 + r29) = r11; // stb @ 0x8086D9B8
    r4 = r4 + 1; // 0x8086D9BC
    if (counter-- != 0) goto 0x0x8086d918;
    /* li r0, 0 */ // 0x8086D9C4
    *(0x15 + r3) = r0; // stb @ 0x8086D9C8
    r31 = *(0x1c + r1); // lwz @ 0x8086D9CC
    r30 = *(0x18 + r1); // lwz @ 0x8086D9D0
    r29 = *(0x14 + r1); // lwz @ 0x8086D9D4
    return;
}