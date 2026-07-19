/* Function at 0x808BB194, size=656 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_808BB194(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808BB1A8
    /* lis r30, 0 */ // 0x808BB1AC
    *(0x14 + r1) = r29; // stw @ 0x808BB1B0
    r3 = *(0 + r30); // lwz @ 0x808BB1B4
    r3 = *(0 + r3); // lwz @ 0x808BB1B8
    r3 = *(0 + r3); // lwz @ 0x808BB1BC
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808bb2c4;
    r3 = *(0 + r30); // lwz @ 0x808BB1CC
    r3 = *(0 + r3); // lwz @ 0x808BB1D0
    r29 = *(0x140 + r3); // lwz @ 0x808BB1D4
    if (!=) goto 0x0x808bb1e8;
    /* li r29, 0 */ // 0x808BB1E0
    /* b 0x808bb23c */ // 0x808BB1E4
    /* lis r30, 0 */ // 0x808BB1E8
    r30 = r30 + 0; // 0x808BB1EC
    if (==) goto 0x0x808bb238;
    r12 = *(0 + r29); // lwz @ 0x808BB1F4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808BB1FC
    /* mtctr r12 */ // 0x808BB200
    /* bctrl  */ // 0x808BB204
    /* b 0x808bb220 */ // 0x808BB208
    if (!=) goto 0x0x808bb21c;
    /* li r0, 1 */ // 0x808BB214
    /* b 0x808bb22c */ // 0x808BB218
    r3 = *(0 + r3); // lwz @ 0x808BB21C
    if (!=) goto 0x0x808bb20c;
    /* li r0, 0 */ // 0x808BB228
    if (==) goto 0x0x808bb238;
    /* b 0x808bb23c */ // 0x808BB234
    /* li r29, 0 */ // 0x808BB238
    r12 = *(0 + r29); // lwz @ 0x808BB23C
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808BB244
    /* mtctr r12 */ // 0x808BB248
    /* bctrl  */ // 0x808BB24C
    r3 = r29;
    /* li r4, 0x10fe */ // 0x808BB254
    /* li r5, 0 */ // 0x808BB258
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    /* li r4, 0 */ // 0x808BB264
    /* li r5, 0x10ff */ // 0x808BB268
    /* li r6, 0 */ // 0x808BB26C
    /* li r7, -1 */ // 0x808BB270
    /* li r8, 0 */ // 0x808BB274
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x808BB280
    /* li r5, 0x1100 */ // 0x808BB284
    /* li r6, 0 */ // 0x808BB288
    /* li r7, -1 */ // 0x808BB28C
    /* li r8, 0 */ // 0x808BB290
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 0 */ // 0x808BB298
    *(0x27c + r29) = r0; // stw @ 0x808BB29C
    r3 = r31;
    /* li r4, 0x4e */ // 0x808BB2A4
    r12 = *(0 + r31); // lwz @ 0x808BB2A8
    /* li r5, 0 */ // 0x808BB2AC
    r12 = *(0x24 + r12); // lwz @ 0x808BB2B0
    /* mtctr r12 */ // 0x808BB2B4
    /* bctrl  */ // 0x808BB2B8
    *(0x23d8 + r31) = r3; // stw @ 0x808BB2BC
    /* b 0x808bb408 */ // 0x808BB2C0
    r3 = *(0 + r30); // lwz @ 0x808BB2C4
    r3 = *(0 + r3); // lwz @ 0x808BB2C8
    r0 = *(0 + r3); // lwz @ 0x808BB2CC
    if (==) goto 0x0x808bb2e0;
    if (!=) goto 0x0x808bb300;
    /* lis r4, 0 */ // 0x808BB2E0
    /* li r0, -1 */ // 0x808BB2E4
    /* lfs f1, 0(r4) */ // 0x808BB2E8
    r3 = r31;
    *(0x3e8 + r31) = r0; // stw @ 0x808BB2F0
    /* li r4, 1 */ // 0x808BB2F4
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* b 0x808bb408 */ // 0x808BB2FC
    if (!=) goto 0x0x808bb3f8;
    r29 = *(0x140 + r3); // lwz @ 0x808BB308
    if (!=) goto 0x0x808bb31c;
    /* li r29, 0 */ // 0x808BB314
    /* b 0x808bb370 */ // 0x808BB318
    /* lis r30, 0 */ // 0x808BB31C
    r30 = r30 + 0; // 0x808BB320
    if (==) goto 0x0x808bb36c;
    r12 = *(0 + r29); // lwz @ 0x808BB328
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808BB330
    /* mtctr r12 */ // 0x808BB334
    /* bctrl  */ // 0x808BB338
    /* b 0x808bb354 */ // 0x808BB33C
    if (!=) goto 0x0x808bb350;
    /* li r0, 1 */ // 0x808BB348
    /* b 0x808bb360 */ // 0x808BB34C
    r3 = *(0 + r3); // lwz @ 0x808BB350
    if (!=) goto 0x0x808bb340;
    /* li r0, 0 */ // 0x808BB35C
    if (==) goto 0x0x808bb36c;
    /* b 0x808bb370 */ // 0x808BB368
    /* li r29, 0 */ // 0x808BB36C
    r12 = *(0 + r29); // lwz @ 0x808BB370
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808BB378
    /* mtctr r12 */ // 0x808BB37C
    /* bctrl  */ // 0x808BB380
    r3 = r29;
    /* li r4, 0xd8e */ // 0x808BB388
    /* li r5, 0 */ // 0x808BB38C
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    /* li r4, 0 */ // 0x808BB398
    /* li r5, 0x7d2 */ // 0x808BB39C
    /* li r6, 0 */ // 0x808BB3A0
    /* li r7, -1 */ // 0x808BB3A4
    /* li r8, 0 */ // 0x808BB3A8
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x808BB3B4
    /* li r5, 0x7d3 */ // 0x808BB3B8
    /* li r6, 0 */ // 0x808BB3BC
    /* li r7, -1 */ // 0x808BB3C0
    /* li r8, 0 */ // 0x808BB3C4
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 1 */ // 0x808BB3CC
    *(0x27c + r29) = r0; // stw @ 0x808BB3D0
    r3 = r31;
    /* li r4, 0x4e */ // 0x808BB3D8
    r12 = *(0 + r31); // lwz @ 0x808BB3DC
    /* li r5, 0 */ // 0x808BB3E0
    r12 = *(0x24 + r12); // lwz @ 0x808BB3E4
    /* mtctr r12 */ // 0x808BB3E8
    /* bctrl  */ // 0x808BB3EC
    *(0x23d8 + r31) = r3; // stw @ 0x808BB3F0
    /* b 0x808bb408 */ // 0x808BB3F4
    /* lis r4, 0 */ // 0x808BB3F8
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808BB400
    FUN_808B3BEC(r4, r3); // bl 0x808B3BEC
    r0 = *(0x24 + r1); // lwz @ 0x808BB408
    r31 = *(0x1c + r1); // lwz @ 0x808BB40C
    r30 = *(0x18 + r1); // lwz @ 0x808BB410
    r29 = *(0x14 + r1); // lwz @ 0x808BB414
    return;
}