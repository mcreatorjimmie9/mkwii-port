/* Function at 0x8076EF44, size=300 bytes */
/* Stack frame: 16 bytes */

void FUN_8076EF44(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    r0 = *(0x44 + r3); // lbz @ 0x8076EF44
    if (==) goto 0x0x8076ef68;
    r7 = *(0x50 + r3); // lwz @ 0x8076EF54
    r0 = *(0x46 + r3); // lha @ 0x8076EF58
    r0 = r0 * r7; // 0x8076EF5C
    /* clrlwi r8, r0, 0x10 */ // 0x8076EF60
    /* b 0x8076ef78 */ // 0x8076EF64
    r7 = *(0x50 + r3); // lwz @ 0x8076EF68
    r0 = *(0x48 + r3); // lha @ 0x8076EF6C
    r0 = r0 * r7; // 0x8076EF70
    /* clrlwi r8, r0, 0x10 */ // 0x8076EF74
    r4 = *(0x50 + r3); // lwz @ 0x8076EF78
    /* lis r5, 0 */ // 0x8076EF7C
    /* lfs f4, 0(r5) */ // 0x8076EF80
    r5 = r8 rlwinm 2; // rlwinm
    r4 = r4 + -1; // 0x8076EF88
    /* li r9, 0 */ // 0x8076EF8C
    /* li r10, 0 */ // 0x8076EF90
    /* b 0x8076efd4 */ // 0x8076EF94
    r0 = *(0x58 + r3); // lwz @ 0x8076EF98
    r6 = r10 rlwinm 2; // rlwinm
    r0 = r0 + r5; // 0x8076EFA0
    /* lfsux f3, r6, r0 */ // 0x8076EFA4
    /* .byte 0xfc, 0x03, 0x08, 0x40 */ // 0x8076EFA8
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8076EFAC
    if (!=) goto 0x0x8076efd0;
    /* lfs f0, 4(r6) */ // 0x8076EFB4
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8076EFB8
    if (<=) goto 0x0x8076efd0;
    /* fsubs f2, f1, f3 */ // 0x8076EFC0
    r9 = r10;
    /* fsubs f0, f0, f3 */ // 0x8076EFC8
    /* fdivs f4, f2, f0 */ // 0x8076EFCC
    /* clrlwi r0, r10, 0x10 */ // 0x8076EFD4
    if (<) goto 0x0x8076ef98;
    r4 = r8 + r7; // 0x8076EFE0
    r6 = *(0x58 + r3); // lwz @ 0x8076EFE4
    r0 = r4 + -1; // 0x8076EFE8
    /* slwi r0, r0, 2 */ // 0x8076EFEC
    /* lfsx f0, r6, r0 */ // 0x8076EFF0
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8076EFF4
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8076EFF8
    if (!=) goto 0x0x8076f038;
    /* lis r4, 0 */ // 0x8076F000
    /* lfs f2, 0(r4) */ // 0x8076F004
    /* .byte 0xfc, 0x02, 0x08, 0x40 */ // 0x8076F008
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8076F00C
    if (!=) goto 0x0x8076f038;
    r4 = r8 + r7; // 0x8076F014
    r5 = r7 + -1; // 0x8076F018
    r0 = r4 + -1; // 0x8076F01C
    /* slwi r0, r0, 2 */ // 0x8076F020
    /* clrlwi r9, r5, 0x10 */ // 0x8076F024
    /* lfsx f0, r6, r0 */ // 0x8076F028
    /* fsubs f1, f1, f0 */ // 0x8076F02C
    /* fsubs f0, f2, f0 */ // 0x8076F030
    /* fdivs f4, f1, f0 */ // 0x8076F034
    /* clrlwi r5, r9, 0x10 */ // 0x8076F038
    /* lis r0, 0x4330 */ // 0x8076F03C
    /* lis r4, 0 */ // 0x8076F040
    *(0xc + r1) = r5; // stw @ 0x8076F044
    /* lfd f2, 0(r4) */ // 0x8076F048
    *(8 + r1) = r0; // stw @ 0x8076F04C
    /* lfs f3, 0x54(r3) */ // 0x8076F050
    /* lfd f1, 8(r1) */ // 0x8076F054
    /* fmuls f0, f3, f4 */ // 0x8076F058
    /* fsubs f1, f1, f2 */ // 0x8076F05C
    /* fmuls f1, f3, f1 */ // 0x8076F060
    /* fadds f1, f1, f0 */ // 0x8076F064
    return;
}