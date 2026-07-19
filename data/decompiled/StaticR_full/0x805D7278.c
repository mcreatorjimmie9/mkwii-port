/* Function at 0x805D7278, size=312 bytes */
/* Stack frame: 0 bytes */

int FUN_805D7278(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    r0 = *(0x56 + r4); // lbz @ 0x805D7278
    if (==) goto 0x0x805d7390;
    /* mulli r10, r5, 0x300 */ // 0x805D7284
    /* li r0, 0x26 */ // 0x805D7288
    r7 = r4 + -1; // 0x805D728C
    /* mulli r9, r6, 0x60 */ // 0x805D7290
    r5 = r3 + r10; // 0x805D7294
    r5 = r5 + r9; // 0x805D7298
    r6 = *(0x212 + r5); // lbz @ 0x805D729C
    r8 = r5 + 0x1bf; // 0x805D72A0
    r6 = r6 | 0x80; // 0x805D72A4
    *(0x212 + r5) = r6; // stb @ 0x805D72A8
    /* mtctr r0 */ // 0x805D72AC
    r6 = *(1 + r7); // lbz @ 0x805D72B0
    /* lbzu r0, 2(r7) */ // 0x805D72B4
    *(1 + r8) = r6; // stb @ 0x805D72B8
    /* stbu r0, 2(r8) */ // 0x805D72BC
    if (counter-- != 0) goto 0x0x805d72b0;
    r0 = *(0x50 + r4); // lhz @ 0x805D72C4
    /* li r6, 0x63 */ // 0x805D72C8
    if (>) goto 0x0x805d72d8;
    r6 = r0;
    r0 = r3 + r10; // 0x805D72D8
    r7 = r0 + r9; // 0x805D72DC
    r0 = *(0x20c + r7); // lwz @ 0x805D72E0
    r0 = r6 rlwimi 0x19; // rlwimi
    *(0x20c + r7) = r0; // stw @ 0x805D72E8
    r0 = *(0x50 + r4); // lhz @ 0x805D72EC
    if (<=) goto 0x0x805d7300;
    /* li r6, 0x3b */ // 0x805D72F8
    /* b 0x805d7304 */ // 0x805D72FC
    r6 = *(0x52 + r4); // lbz @ 0x805D7300
    r0 = *(0x20c + r7); // lwz @ 0x805D7304
    r0 = r6 rlwimi 0x12; // rlwimi
    *(0x20c + r7) = r0; // stw @ 0x805D730C
    r0 = *(0x50 + r4); // lhz @ 0x805D7310
    if (<=) goto 0x0x805d7324;
    /* li r8, 0x3e7 */ // 0x805D731C
    /* b 0x805d7328 */ // 0x805D7320
    r8 = *(0x54 + r4); // lhz @ 0x805D7324
    r0 = r3 + r10; // 0x805D7328
    r7 = r0 + r9; // 0x805D732C
    r6 = *(0x20c + r7); // lwz @ 0x805D7330
    r6 = r8 rlwimi 8; // rlwimi
    *(0x20c + r7) = r6; // stw @ 0x805D7338
    r0 = *(0x58 + r4); // lwz @ 0x805D733C
    r3 = *(0x210 + r7); // lhz @ 0x805D7340
    r3 = r0 rlwimi 4; // rlwimi
    *(0x210 + r7) = r3; // sth @ 0x805D7348
    r0 = *(0x5c + r4); // lwz @ 0x805D734C
    r3 = r0 rlwimi 0xa; // rlwimi
    *(0x210 + r7) = r3; // sth @ 0x805D7354
    r0 = *(0x60 + r4); // lwz @ 0x805D7358
    r3 = r0 rlwimi 0; // rlwimi
    *(0x210 + r7) = r3; // sth @ 0x805D7360
    r0 = *(0x64 + r4); // lwz @ 0x805D7364
    r6 = r0 rlwimi 6; // rlwimi
    *(0x20c + r7) = r6; // stw @ 0x805D736C
    r0 = *(0x68 + r4); // lbz @ 0x805D7370
    r6 = r0 rlwimi 0; // rlwimi
    *(0x20c + r7) = r6; // stw @ 0x805D7378
    r3 = *(0x6c + r4); // lwz @ 0x805D737C
    r0 = *(0x212 + r5); // lbz @ 0x805D7380
    r0 = r3 rlwimi 4; // rlwimi
    *(0x212 + r5) = r0; // stb @ 0x805D7388
    return;
    /* mulli r4, r5, 0x300 */ // 0x805D7390
    /* mulli r0, r6, 0x60 */ // 0x805D7394
    r3 = r3 + r4; // 0x805D7398
    r3 = r3 + r0; // 0x805D739C
    r0 = *(0x212 + r3); // lbz @ 0x805D73A0
    r0 = r0 rlwinm 0; // rlwinm
    *(0x212 + r3) = r0; // stb @ 0x805D73A8
    return;
}