/* Function at 0x8074C494, size=344 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8074C494(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x8074C4A0
    *(0x9c + r1) = r31; // stw @ 0x8074C4A8
    /* lis r31, 0 */ // 0x8074C4AC
    r31 = r31 + 0; // 0x8074C4B0
    *(0x98 + r1) = r30; // stw @ 0x8074C4B4
    r30 = r3;
    /* lfs f1, 0(r31) */ // 0x8074C4BC
    /* lfs f0, 0x6c(r31) */ // 0x8074C4C4
    r4 = r30 + 0x30; // 0x8074C4C8
    /* stfs f1, 0x2c(r1) */ // 0x8074C4CC
    /* stfs f0, 0x30(r1) */ // 0x8074C4D0
    /* stfs f1, 0x34(r1) */ // 0x8074C4D4
    /* stfs f1, 0x38(r1) */ // 0x8074C4D8
    /* stfs f1, 0x3c(r1) */ // 0x8074C4DC
    /* stfs f1, 0x40(r1) */ // 0x8074C4E0
    /* stfs f1, 0x44(r1) */ // 0x8074C4E4
    /* stfs f1, 0x48(r1) */ // 0x8074C4E8
    /* stfs f1, 0x4c(r1) */ // 0x8074C4EC
    *(0x90 + r1) = r0; // stw @ 0x8074C4F0
    FUN_805A4464(); // bl 0x805A4464
    /* lis r3, 0 */ // 0x8074C4F8
    /* lis r6, 0 */ // 0x8074C4FC
    /* lis r5, 0 */ // 0x8074C500
    /* lis r7, 0x64ec */ // 0x8074C504
    r8 = *(0 + r6); // lwz @ 0x8074C508
    r6 = r7 + -0x2001; // 0x8074C50C
    r3 = *(0 + r3); // lwz @ 0x8074C510
    /* lfs f1, 0x6c(r31) */ // 0x8074C518
    r5 = r5 + 0; // 0x8074C51C
    /* li r9, 0 */ // 0x8074C524
    FUN_8081A594(r4, r5, r7, r9); // bl 0x8081A594
    if (==) goto 0x0x8074c5c4;
    r4 = r30 + 0x30; // 0x8074C538
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r0 = *(0x2c + r30); // lhz @ 0x8074C544
    /* lfs f1, 0x1c(r1) */ // 0x8074C548
    /* lfs f2, 0x18(r1) */ // 0x8074C54C
    r0 = r0 | 1; // 0x8074C550
    /* lfs f0, 0x14(r1) */ // 0x8074C554
    /* stfs f0, 0x30(r30) */ // 0x8074C558
    /* lfs f0, 0x70(r31) */ // 0x8074C55C
    *(0x2c + r30) = r0; // sth @ 0x8074C560
    /* stfs f2, 0x34(r30) */ // 0x8074C564
    /* stfs f1, 0x38(r30) */ // 0x8074C568
    /* lfs f1, 0x80(r1) */ // 0x8074C56C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074C570
    /* mfcr r0 */ // 0x8074C574
    /* rlwinm. r0, r0, 2, 0x1f, 0x1f */ // 0x8074C578
    if (==) goto 0x0x8074c598;
    /* lfs f0, 0x5c(r1) */ // 0x8074C580
    /* stfs f0, 0xec(r30) */ // 0x8074C584
    /* lfs f0, 0x60(r1) */ // 0x8074C588
    /* stfs f0, 0xf0(r30) */ // 0x8074C58C
    /* lfs f0, 0x64(r1) */ // 0x8074C590
    /* stfs f0, 0xf4(r30) */ // 0x8074C594
    /* lfs f0, 0(r31) */ // 0x8074C598
    /* lis r3, 0 */ // 0x8074C59C
    /* stfs f0, 0xdc(r30) */ // 0x8074C5A0
    /* lfs f1, 0(r3) */ // 0x8074C5A4
    /* stfs f0, 8(r1) */ // 0x8074C5A8
    /* stfs f1, 0xc(r1) */ // 0x8074C5AC
    /* stfs f0, 0x10(r1) */ // 0x8074C5B0
    /* stfs f0, 0x110(r30) */ // 0x8074C5B4
    /* stfs f1, 0x114(r30) */ // 0x8074C5B8
    /* stfs f0, 0x118(r30) */ // 0x8074C5BC
    /* b 0x8074c5d4 */ // 0x8074C5C0
    /* lfs f0, 0(r31) */ // 0x8074C5C4
    /* stfs f0, 0x118(r30) */ // 0x8074C5C8
    /* stfs f0, 0x114(r30) */ // 0x8074C5CC
    /* stfs f0, 0x110(r30) */ // 0x8074C5D0
    r0 = *(0xa4 + r1); // lwz @ 0x8074C5D4
    r31 = *(0x9c + r1); // lwz @ 0x8074C5D8
    r30 = *(0x98 + r1); // lwz @ 0x8074C5DC
    return;
}