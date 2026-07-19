/* Function at 0x8072C260, size=328 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_8072C260(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8072C270
    r31 = r31 + 0; // 0x8072C274
    *(0x28 + r1) = r30; // stw @ 0x8072C278
    r30 = r3;
    r0 = *(0x96 + r3); // lbz @ 0x8072C280
    if (!=) goto 0x0x8072c390;
    r4 = *(0x7b0 + r3); // lwz @ 0x8072C28C
    if (<=) goto 0x0x8072c390;
    /* lfs f1, 0x6e8(r3) */ // 0x8072C298
    /* lfs f0, 0x28(r31) */ // 0x8072C29C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8072C2A0
    if (<=) goto 0x0x8072c390;
    r0 = *(0x7b4 + r3); // lbz @ 0x8072C2A8
    /* extsb r0, r0 */ // 0x8072C2AC
    if (<=) goto 0x0x8072c390;
    r0 = *(0x129 + r3); // lbz @ 0x8072C2B8
    if (==) goto 0x0x8072c2f8;
    /* xoris r3, r4, 0x8000 */ // 0x8072C2C4
    /* lis r0, 0x4330 */ // 0x8072C2C8
    *(0x1c + r1) = r3; // stw @ 0x8072C2CC
    /* lfd f1, 0x30(r31) */ // 0x8072C2D4
    r4 = r30 + 0x7a4; // 0x8072C2D8
    *(0x18 + r1) = r0; // stw @ 0x8072C2DC
    /* lfd f0, 0x18(r1) */ // 0x8072C2E0
    /* fsubs f1, f0, f1 */ // 0x8072C2E4
    FUN_80735EBC(r4); // bl 0x80735EBC
    r3 = r30;
    FUN_80736204(r3, r4); // bl 0x80736204
    r0 = *(0x24 + r30); // lbz @ 0x8072C2F8
    if (!=) goto 0x0x8072c30c;
    r3 = *(0x118 + r30); // lwz @ 0x8072C304
    FUN_8061F0C8(); // bl 0x8061F0C8
    /* lfs f2, 0x6f0(r30) */ // 0x8072C30C
    /* lfs f0, 0x6e8(r30) */ // 0x8072C310
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x8072C314
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8072C318
    if (!=) goto 0x0x8072c324;
    /* b 0x8072c33c */ // 0x8072C320
    /* lfs f2, 0x28(r31) */ // 0x8072C324
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x8072C328
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8072C32C
    if (!=) goto 0x0x8072c338;
    /* b 0x8072c33c */ // 0x8072C334
    /* fmr f2, f0 */ // 0x8072C338
    /* lfs f0, 0x28(r31) */ // 0x8072C33C
    /* li r4, 1 */ // 0x8072C340
    /* lfs f3, 0x6f0(r30) */ // 0x8072C344
    /* li r5, 1 */ // 0x8072C348
    /* lfs f1, 4(r31) */ // 0x8072C34C
    /* fsubs f2, f2, f0 */ // 0x8072C350
    /* fsubs f3, f3, f0 */ // 0x8072C354
    /* lfs f0, 0x2c(r31) */ // 0x8072C358
    r3 = *(0x118 + r30); // lwz @ 0x8072C35C
    /* fdivs f1, f1, f3 */ // 0x8072C360
    /* fmuls f1, f2, f1 */ // 0x8072C364
    /* fadds f1, f0, f1 */ // 0x8072C368
    FUN_8061DC98(); // bl 0x8061DC98
    r3 = *(0x118 + r30); // lwz @ 0x8072C370
    /* li r4, 0x11 */ // 0x8072C374
    FUN_8061E02C(r4); // bl 0x8061E02C
    r3 = *(0x118 + r30); // lwz @ 0x8072C37C
    FUN_8061E010(r4); // bl 0x8061E010
    FUN_807986C8(r4); // bl 0x807986C8
    /* li r0, 0 */ // 0x8072C388
    *(0x7b4 + r30) = r0; // stb @ 0x8072C38C
    r0 = *(0x34 + r1); // lwz @ 0x8072C390
    r31 = *(0x2c + r1); // lwz @ 0x8072C394
    r30 = *(0x28 + r1); // lwz @ 0x8072C398
    return;
}