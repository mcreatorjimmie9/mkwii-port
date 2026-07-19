/* Function at 0x8072F2A8, size=648 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8072F2A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x8072F2BC
    *(0x34 + r1) = r29; // stw @ 0x8072F2C0
    r0 = *(0x153 + r3); // lbz @ 0x8072F2C4
    if (==) goto 0x0x8072f514;
    /* lis r4, 0 */ // 0x8072F2D0
    r4 = *(0 + r4); // lwz @ 0x8072F2D4
    r0 = *(0x25 + r4); // lbz @ 0x8072F2D8
    if (!=) goto 0x0x8072f514;
    r29 = *(0x724 + r3); // lwz @ 0x8072F2E4
    if (!=) goto 0x0x8072f2f4;
    /* b 0x8072f514 */ // 0x8072F2F0
    r0 = *(0x138 + r3); // lbz @ 0x8072F2F4
    if (==) goto 0x0x8072f434;
    /* li r4, 0 */ // 0x8072F304
    if (<) goto 0x0x8072f324;
    /* lis r3, 0 */ // 0x8072F30C
    r3 = r3 + 0; // 0x8072F310
    r0 = *(4 + r3); // lwz @ 0x8072F314
    if (>=) goto 0x0x8072f324;
    /* li r4, 1 */ // 0x8072F320
    if (!=) goto 0x0x8072f340;
    /* lis r3, 0 */ // 0x8072F32C
    r12 = *(0 + r3); // lwzu @ 0x8072F330
    r12 = *(0x18 + r12); // lwz @ 0x8072F334
    /* mtctr r12 */ // 0x8072F338
    /* bctrl  */ // 0x8072F33C
    /* lis r30, 0 */ // 0x8072F340
    /* slwi r0, r29, 2 */ // 0x8072F344
    r30 = r30 + 0; // 0x8072F348
    r4 = *(8 + r30); // lwz @ 0x8072F350
    /* lwzx r4, r4, r0 */ // 0x8072F354
    r4 = *(0x6c + r4); // lwz @ 0x8072F358
    r12 = *(0 + r4); // lwz @ 0x8072F35C
    r12 = *(0x20 + r12); // lwz @ 0x8072F360
    /* mtctr r12 */ // 0x8072F364
    /* bctrl  */ // 0x8072F368
    /* lis r3, 0 */ // 0x8072F36C
    r3 = *(0 + r3); // lwz @ 0x8072F374
    /* li r5, -1 */ // 0x8072F378
    /* li r6, 1 */ // 0x8072F37C
    FUN_805A6434(r3, r4, r5, r6); // bl 0x805A6434
    /* extsh r0, r3 */ // 0x8072F384
    if (==) goto 0x0x8072f39c;
    r3 = r31;
    FUN_8073D1FC(r3); // bl 0x8073D1FC
    /* b 0x8072f50c */ // 0x8072F398
    r29 = *(0x724 + r31); // lwz @ 0x8072F39C
    /* li r3, 0 */ // 0x8072F3A0
    if (<) goto 0x0x8072f3bc;
    r0 = *(4 + r30); // lwz @ 0x8072F3AC
    if (>=) goto 0x0x8072f3bc;
    /* li r3, 1 */ // 0x8072F3B8
    if (!=) goto 0x0x8072f3d8;
    /* lis r3, 0 */ // 0x8072F3C4
    r12 = *(0 + r3); // lwzu @ 0x8072F3C8
    r12 = *(0x18 + r12); // lwz @ 0x8072F3CC
    /* mtctr r12 */ // 0x8072F3D0
    /* bctrl  */ // 0x8072F3D4
    /* lis r4, 0 */ // 0x8072F3D8
    /* slwi r0, r29, 2 */ // 0x8072F3DC
    r4 = r4 + 0; // 0x8072F3E0
    r4 = *(8 + r4); // lwz @ 0x8072F3E8
    /* lwzx r4, r4, r0 */ // 0x8072F3EC
    r4 = *(0x6c + r4); // lwz @ 0x8072F3F0
    r12 = *(0 + r4); // lwz @ 0x8072F3F4
    r12 = *(0x20 + r12); // lwz @ 0x8072F3F8
    /* mtctr r12 */ // 0x8072F3FC
    /* bctrl  */ // 0x8072F400
    /* lfs f0, 0x14(r1) */ // 0x8072F404
    /* stfs f0, 0x9c(r31) */ // 0x8072F408
    r3 = *(0x2d4 + r31); // lwz @ 0x8072F40C
    /* lfs f0, 0x18(r1) */ // 0x8072F410
    /* stfs f0, 0xa0(r31) */ // 0x8072F414
    /* lfs f0, 0x1c(r1) */ // 0x8072F418
    /* stfs f0, 0xa4(r31) */ // 0x8072F41C
    r12 = *(0 + r3); // lwz @ 0x8072F420
    r12 = *(0x10 + r12); // lwz @ 0x8072F424
    /* mtctr r12 */ // 0x8072F428
    /* bctrl  */ // 0x8072F42C
    /* b 0x8072f50c */ // 0x8072F430
    /* lis r3, 0 */ // 0x8072F434
    r4 = r31 + 0x6d0; // 0x8072F438
    r3 = *(0 + r3); // lwz @ 0x8072F43C
    /* li r5, -1 */ // 0x8072F440
    /* li r6, 1 */ // 0x8072F444
    FUN_805A6434(r3, r4, r5, r6); // bl 0x805A6434
    /* extsh r0, r3 */ // 0x8072F44C
    if (==) goto 0x0x8072f470;
    r0 = *(0xa8 + r31); // lbz @ 0x8072F458
    if (!=) goto 0x0x8072f470;
    r3 = r31;
    FUN_8073D1FC(r3); // bl 0x8073D1FC
    /* b 0x8072f50c */ // 0x8072F46C
    r29 = *(0x724 + r31); // lwz @ 0x8072F470
    /* li r4, 0 */ // 0x8072F474
    if (<) goto 0x0x8072f498;
    /* lis r3, 0 */ // 0x8072F480
    r3 = r3 + 0; // 0x8072F484
    r0 = *(4 + r3); // lwz @ 0x8072F488
    if (>=) goto 0x0x8072f498;
    /* li r4, 1 */ // 0x8072F494
    if (!=) goto 0x0x8072f4b4;
    /* lis r3, 0 */ // 0x8072F4A0
    r12 = *(0 + r3); // lwzu @ 0x8072F4A4
    r12 = *(0x18 + r12); // lwz @ 0x8072F4A8
    /* mtctr r12 */ // 0x8072F4AC
    /* bctrl  */ // 0x8072F4B0
    /* lis r4, 0 */ // 0x8072F4B4
    /* slwi r0, r29, 2 */ // 0x8072F4B8
    r4 = r4 + 0; // 0x8072F4BC
    r4 = *(8 + r4); // lwz @ 0x8072F4C4
    /* lwzx r4, r4, r0 */ // 0x8072F4C8
    r4 = *(0x6c + r4); // lwz @ 0x8072F4CC
    r12 = *(0 + r4); // lwz @ 0x8072F4D0
    r12 = *(0x20 + r12); // lwz @ 0x8072F4D4
    /* mtctr r12 */ // 0x8072F4D8
    /* bctrl  */ // 0x8072F4DC
    /* lfs f0, 8(r1) */ // 0x8072F4E0
    /* stfs f0, 0x9c(r31) */ // 0x8072F4E4
    r3 = *(0x2d4 + r31); // lwz @ 0x8072F4E8
    /* lfs f0, 0xc(r1) */ // 0x8072F4EC
    /* stfs f0, 0xa0(r31) */ // 0x8072F4F0
    /* lfs f0, 0x10(r1) */ // 0x8072F4F4
    /* stfs f0, 0xa4(r31) */ // 0x8072F4F8
    r12 = *(0 + r3); // lwz @ 0x8072F4FC
    r12 = *(0x10 + r12); // lwz @ 0x8072F500
    /* mtctr r12 */ // 0x8072F504
    /* bctrl  */ // 0x8072F508
    /* li r0, 0 */ // 0x8072F50C
    *(0xa8 + r31) = r0; // stb @ 0x8072F510
    r0 = *(0x44 + r1); // lwz @ 0x8072F514
    r31 = *(0x3c + r1); // lwz @ 0x8072F518
    r30 = *(0x38 + r1); // lwz @ 0x8072F51C
    r29 = *(0x34 + r1); // lwz @ 0x8072F520
    return;
}