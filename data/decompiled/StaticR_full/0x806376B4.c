/* Function at 0x806376B4, size=184 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806376B4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r6, 0 */ // 0x806376C0
    *(0x14 + r1) = r0; // stw @ 0x806376C4
    r7 = r3;
    r6 = r6 + 0; // 0x806376CC
    if (!=) goto 0x0x80637744;
    r0 = *(0x14 + r3); // lbz @ 0x806376D4
    if (==) goto 0x0x80637744;
    /* lis r5, 0 */ // 0x806376E0
    r5 = *(0 + r5); // lwz @ 0x806376E4
    r5 = *(0x20 + r5); // lwz @ 0x806376E8
    if (>=) goto 0x0x80637700;
    /* lfs f0, 4(r6) */ // 0x806376F4
    /* stfs f0, 0x10(r3) */ // 0x806376F8
    /* b 0x80637744 */ // 0x806376FC
    if (>=) goto 0x0x8063773c;
    /* lis r0, 0x4330 */ // 0x80637708
    *(0xc + r1) = r5; // stw @ 0x8063770C
    /* lfd f3, 0x28(r6) */ // 0x80637710
    *(8 + r1) = r0; // stw @ 0x80637714
    /* lfs f1, 0x24(r6) */ // 0x80637718
    /* lfd f2, 8(r1) */ // 0x8063771C
    /* lfs f0, 0x20(r6) */ // 0x80637720
    /* fsubs f2, f2, f3 */ // 0x80637724
    /* fsubs f1, f2, f1 */ // 0x80637728
    /* fmuls f0, f0, f1 */ // 0x8063772C
    /* fmuls f0, f0, f0 */ // 0x80637730
    /* stfs f0, 0x10(r3) */ // 0x80637734
    /* b 0x80637744 */ // 0x80637738
    /* lfs f0, 8(r6) */ // 0x8063773C
    /* stfs f0, 0x10(r3) */ // 0x80637740
    r3 = *(8 + r3); // lwz @ 0x80637744
    r0 = r4 rlwinm 2; // rlwinm
    r4 = *(0x14 + r7); // lbz @ 0x8063774C
    /* lwzx r3, r3, r0 */ // 0x80637750
    /* lfs f1, 0x10(r7) */ // 0x80637754
    FUN_80637270(); // bl 0x80637270
    r0 = *(0x14 + r1); // lwz @ 0x8063775C
    return;
}