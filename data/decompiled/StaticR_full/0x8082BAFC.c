/* Function at 0x8082BAFC, size=500 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8082BAFC(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8082BB04
    r5 = r5 + 0; // 0x8082BB0C
    *(0x2c + r1) = r31; // stw @ 0x8082BB10
    /* lis r31, 0 */ // 0x8082BB14
    r31 = r31 + 0; // 0x8082BB18
    *(0x28 + r1) = r30; // stw @ 0x8082BB1C
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x8082BB24
    r29 = r3;
    r0 = *(4 + r3); // lwz @ 0x8082BB2C
    /* lfs f0, 0x5c(r3) */ // 0x8082BB30
    /* mulli r0, r0, 0x74 */ // 0x8082BB34
    r4 = r5 + r0; // 0x8082BB38
    /* lfs f1, 0x6c(r4) */ // 0x8082BB3C
    /* fmuls f0, f0, f1 */ // 0x8082BB40
    /* stfs f0, 8(r1) */ // 0x8082BB44
    /* lfs f0, 0x64(r3) */ // 0x8082BB48
    /* fmuls f0, f0, f1 */ // 0x8082BB4C
    /* stfs f0, 0x10(r1) */ // 0x8082BB50
    /* lfs f0, 0x60(r3) */ // 0x8082BB54
    /* stfs f0, 0xc(r1) */ // 0x8082BB58
    r0 = *(0x7c + r3); // lwz @ 0x8082BB5C
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8082BB60
    if (==) goto 0x0x8082bbd4;
    r0 = *(0x78 + r3); // lwz @ 0x8082BB68
    /* lis r4, 0 */ // 0x8082BB6C
    r5 = *(0 + r4); // lwz @ 0x8082BB70
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x8082BB74
    if (!=) goto 0x0x8082bb84;
    r0 = *(0x6c + r3); // lbz @ 0x8082BB7C
    /* b 0x8082bb88 */ // 0x8082BB80
    /* li r0, 0xc */ // 0x8082BB84
    r0 = r0 rlwinm 2; // rlwinm
    /* li r4, 0 */ // 0x8082BB8C
    r5 = r5 + r0; // 0x8082BB90
    r5 = *(0x10 + r5); // lwz @ 0x8082BB94
    r0 = *(0x6dc + r5); // lwz @ 0x8082BB98
    if (<=) goto 0x0x8082bbbc;
    if (==) goto 0x0x8082bbb8;
    r0 = *(0x6e0 + r5); // lwz @ 0x8082BBAC
    if (!=) goto 0x0x8082bbbc;
    /* li r4, 1 */ // 0x8082BBB8
    if (==) goto 0x0x8082bbd4;
    /* lfs f0, 0(r31) */ // 0x8082BBC4
    /* stfs f0, 8(r1) */ // 0x8082BBC8
    /* stfs f0, 0xc(r1) */ // 0x8082BBCC
    /* stfs f0, 0x10(r1) */ // 0x8082BBD0
    r3 = *(0xa0 + r3); // lwz @ 0x8082BBD4
    r12 = *(0 + r3); // lwz @ 0x8082BBDC
    r12 = *(0x14 + r12); // lwz @ 0x8082BBE0
    /* mtctr r12 */ // 0x8082BBE4
    /* bctrl  */ // 0x8082BBE8
    r0 = *(0x78 + r29); // lwz @ 0x8082BBEC
    /* rlwinm. r0, r0, 0, 0x11, 0x11 */ // 0x8082BBF0
    if (==) goto 0x0x8082bc00;
    /* lfs f0, 0x48(r29) */ // 0x8082BBF8
    /* stfs f0, 0x1c(r30) */ // 0x8082BBFC
    r0 = *(0x7c + r29); // lwz @ 0x8082BC00
    /* li r4, 0 */ // 0x8082BC04
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x8082BC08
    if (!=) goto 0x0x8082bc40;
    r0 = *(0x78 + r29); // lwz @ 0x8082BC10
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8082BC14
    if (==) goto 0x0x8082bc40;
    r0 = *(4 + r29); // lwz @ 0x8082BC1C
    /* lis r3, 0 */ // 0x8082BC20
    r3 = r3 + 0; // 0x8082BC24
    /* mulli r0, r0, 0x74 */ // 0x8082BC28
    r3 = r3 + r0; // 0x8082BC2C
    r0 = *(0x58 + r3); // lbz @ 0x8082BC30
    if (!=) goto 0x0x8082bc40;
    /* li r4, 1 */ // 0x8082BC3C
    if (==) goto 0x0x8082bc84;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r0 = *(0x7c + r29); // lwz @ 0x8082BC50
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8082BC54
    if (==) goto 0x0x8082bc64;
    r5 = r29 + 0x8c; // 0x8082BC5C
    /* b 0x8082bc68 */ // 0x8082BC60
    r5 = *(0x98 + r29); // lwz @ 0x8082BC64
    /* lfs f1, 0(r5) */ // 0x8082BC68
    r3 = r30;
    /* lfs f2, 4(r5) */ // 0x8082BC70
    r4 = r30;
    /* lfs f3, 8(r5) */ // 0x8082BC78
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x8082bd18 */ // 0x8082BC80
    r3 = *(0x78 + r29); // lwz @ 0x8082BC84
    /* rlwinm. r0, r3, 0, 5, 5 */ // 0x8082BC88
    if (==) goto 0x0x8082bd18;
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */ // 0x8082BC90
    if (!=) goto 0x0x8082bd18;
    /* lfs f1, 0x24(r30) */ // 0x8082BC98
    /* lfs f0, 0x54(r31) */ // 0x8082BC9C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8082BCA0
    if (>=) goto 0x0x8082bd18;
    /* lfs f0, 0x28(r30) */ // 0x8082BCA8
    /* lfs f1, 0x20(r30) */ // 0x8082BCAC
    /* fmuls f2, f0, f0 */ // 0x8082BCB0
    /* lfs f0, 0(r31) */ // 0x8082BCB4
    /* fmuls f1, f1, f1 */ // 0x8082BCB8
    /* fadds f1, f1, f2 */ // 0x8082BCBC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8082BCC0
    if (<=) goto 0x0x8082bd10;
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0x20(r30) */ // 0x8082BCCC
    /* lfs f3, 0(r31) */ // 0x8082BCD0
    /* fmuls f4, f0, f1 */ // 0x8082BCD4
    /* lfs f0, 0x28(r30) */ // 0x8082BCD8
    /* lfs f2, 4(r31) */ // 0x8082BCDC
    /* fmuls f1, f0, f1 */ // 0x8082BCE0
    /* stfs f4, 0x20(r30) */ // 0x8082BCE4
    /* fneg f0, f4 */ // 0x8082BCE8
    /* stfs f3, 0x24(r30) */ // 0x8082BCEC
}