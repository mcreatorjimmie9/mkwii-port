/* Function at 0x8085C028, size=264 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8085C028(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8085C038
    r31 = r31 + 0; // 0x8085C03C
    *(0x48 + r1) = r30; // stw @ 0x8085C040
    r30 = r4;
    *(0x44 + r1) = r29; // stw @ 0x8085C048
    r29 = r3;
    r0 = *(0x23e + r3); // lbz @ 0x8085C050
    if (!=) goto 0x0x8085c14c;
    r0 = *(0x23d + r3); // lbz @ 0x8085C05C
    if (==) goto 0x0x8085c0e8;
    r3 = *(0x10 + r3); // lwz @ 0x8085C068
    FUN_8085842C(); // bl 0x8085842C
    if (==) goto 0x0x8085c0b0;
    r0 = *(0x23f + r29); // lbz @ 0x8085C078
    /* lfs f2, 0xc4(r31) */ // 0x8085C07C
    if (==) goto 0x0x8085c090;
    /* lfs f0, 0x124(r31) */ // 0x8085C088
    /* fmuls f2, f2, f0 */ // 0x8085C08C
    /* lfs f0, 0x240(r29) */ // 0x8085C090
    /* lfs f1, 0xb0(r31) */ // 0x8085C094
    /* fadds f0, f0, f2 */ // 0x8085C098
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8085C09C
    if (<=) goto 0x0x8085c0a8;
    /* b 0x8085c0e4 */ // 0x8085C0A4
    /* fmr f1, f0 */ // 0x8085C0A8
    /* b 0x8085c0e4 */ // 0x8085C0AC
    r0 = *(0x23f + r29); // lbz @ 0x8085C0B0
    /* lfs f2, 0x128(r31) */ // 0x8085C0B4
    if (==) goto 0x0x8085c0c8;
    /* lfs f0, 0x124(r31) */ // 0x8085C0C0
    /* fmuls f2, f2, f0 */ // 0x8085C0C4
    /* lfs f0, 0x240(r29) */ // 0x8085C0C8
    /* lfs f1, 0(r31) */ // 0x8085C0CC
    /* fsubs f0, f0, f2 */ // 0x8085C0D0
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8085C0D4
    if (>=) goto 0x0x8085c0e0;
    /* b 0x8085c0e4 */ // 0x8085C0DC
    /* fmr f1, f0 */ // 0x8085C0E0
    /* stfs f1, 0x240(r29) */ // 0x8085C0E4
    /* lfs f1, 0(r31) */ // 0x8085C0E8
    /* lfs f0, 0x240(r29) */ // 0x8085C0EC
    /* fcmpu cr0, f1, f0 */ // 0x8085C0F0
    if (==) goto 0x0x8085c14c;
    /* addic. r4, r29, 0xb4 */ // 0x8085C0F8
    if (==) goto 0x0x8085c108;
    r3 = *(0 + r30); // lwz @ 0x8085C100
    FUN_805E3430(); // bl 0x805E3430
    r3 = r29 + 0xb4; // 0x8085C108
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r5 = *(0x10 + r29); // lwz @ 0x8085C114
    r3 = r29;
    /* lfs f1, 0x240(r29) */ // 0x8085C11C
    r4 = r5 + 0x540; // 0x8085C124
    r5 = r5 + 0x5a0; // 0x8085C128
    /* li r7, 0 */ // 0x8085C12C
}