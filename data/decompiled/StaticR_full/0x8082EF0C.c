/* Function at 0x8082EF0C, size=200 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8082EF0C(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x8082EF20
    /* lis r30, 0 */ // 0x8082EF24
    r30 = r30 + 0; // 0x8082EF28
    r4 = *(0x78 + r3); // lwz @ 0x8082EF2C
    /* rlwinm. r0, r4, 0, 0x19, 0x19 */ // 0x8082EF30
    if (==) goto 0x0x8082ef40;
    FUN_8082ED14(); // bl 0x8082ED14
    /* b 0x8082f088 */ // 0x8082EF3C
    /* rlwinm. r0, r4, 0, 6, 6 */ // 0x8082EF40
    if (==) goto 0x0x8082ef5c;
    /* lfs f1, 0xd8(r30) */ // 0x8082EF48
    /* lfs f2, 0xdc(r30) */ // 0x8082EF4C
    /* lfs f3, 0(r30) */ // 0x8082EF50
    FUN_8083CBB0(); // bl 0x8083CBB0
    /* b 0x8082ef6c */ // 0x8082EF58
    /* lfs f1, 0xe0(r30) */ // 0x8082EF5C
    /* lfs f2, 0xe4(r30) */ // 0x8082EF60
    /* lfs f3, 0(r30) */ // 0x8082EF64
    FUN_8083CBB0(); // bl 0x8083CBB0
    r3 = *(0x74 + r31); // lwz @ 0x8082EF6C
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */ // 0x8082EF70
    if (==) goto 0x0x8082efa4;
    /* clrlwi. r0, r3, 0x1e */ // 0x8082EF78
    if (!=) goto 0x0x8082efa4;
    r0 = *(0x78 + r31); // lwz @ 0x8082EF80
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x8082EF84
    if (==) goto 0x0x8082ef9c;
    /* lfs f1, 0x54(r31) */ // 0x8082EF8C
    /* lfs f0, 0xe8(r30) */ // 0x8082EF90
    /* fmuls f0, f1, f0 */ // 0x8082EF94
    /* stfs f0, 0x54(r31) */ // 0x8082EF98
    r3 = r31;
    FUN_8083BF50(r3); // bl 0x8083BF50
    r0 = *(0x78 + r31); // lwz @ 0x8082EFA4
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8082EFA8
    if (==) goto 0x0x8082efb8;
    /* lfs f3, 4(r30) */ // 0x8082EFB0
    /* b 0x8082efbc */ // 0x8082EFB4
    /* lfs f3, 0xec(r30) */ // 0x8082EFB8
    /* .byte 0xe0, 0x1f, 0x00, 0x2c */ // 0x8082EFBC
    r3 = r31 + 0x20; // 0x8082EFC0
    /* .byte 0xe0, 0x3f, 0x00, 0xc8 */ // 0x8082EFC4
    /* vmsumshm v2, v1, v0, v0 */ // 0x8082EFC8
    /* .byte 0xe0, 0x3f, 0x80, 0xd0 */ // 0x8082EFCC
    /* .byte 0x10, 0x42, 0x00, 0xdc */ // 0x8082EFD0
}