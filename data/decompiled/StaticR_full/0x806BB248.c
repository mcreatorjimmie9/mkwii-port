/* Function at 0x806BB248, size=1448 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 18 function(s) */

int FUN_806BB248(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806BB25C
    *(0x14 + r1) = r29; // stw @ 0x806BB260
    r4 = *(0x310 + r3); // lwz @ 0x806BB264
    r0 = r4 + -6; // 0x806BB268
    if (<=) goto 0x0x806bb738;
    if (==) goto 0x0x806bb298;
    if (==) goto 0x0x806bb4b4;
    if (==) goto 0x0x806bb5a0;
    if (==) goto 0x0x806bb66c;
    /* b 0x806bb7d4 */ // 0x806BB294
    /* lis r3, 0 */ // 0x806BB298
    r3 = *(0 + r3); // lwz @ 0x806BB29C
    r3 = *(0 + r3); // lwz @ 0x806BB2A0
    r29 = *(0x154 + r3); // lwz @ 0x806BB2A4
    if (!=) goto 0x0x806bb2b8;
    /* li r29, 0 */ // 0x806BB2B0
    /* b 0x806bb30c */ // 0x806BB2B4
    /* lis r30, 0 */ // 0x806BB2B8
    r30 = r30 + 0; // 0x806BB2BC
    if (==) goto 0x0x806bb308;
    r12 = *(0 + r29); // lwz @ 0x806BB2C4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BB2CC
    /* mtctr r12 */ // 0x806BB2D0
    /* bctrl  */ // 0x806BB2D4
    /* b 0x806bb2f0 */ // 0x806BB2D8
    if (!=) goto 0x0x806bb2ec;
    /* li r0, 1 */ // 0x806BB2E4
    /* b 0x806bb2fc */ // 0x806BB2E8
    r3 = *(0 + r3); // lwz @ 0x806BB2EC
    if (!=) goto 0x0x806bb2dc;
    /* li r0, 0 */ // 0x806BB2F8
    if (==) goto 0x0x806bb308;
    /* b 0x806bb30c */ // 0x806BB304
    /* li r29, 0 */ // 0x806BB308
    r0 = *(0x270 + r29); // lwz @ 0x806BB30C
    if (!=) goto 0x0x806bb414;
    /* lis r3, 0 */ // 0x806BB318
    r6 = *(0x31c + r31); // lwz @ 0x806BB31C
    r3 = *(0 + r3); // lwz @ 0x806BB320
    r4 = r31 + 0x4f0; // 0x806BB324
    r7 = r31 + 0x324; // 0x806BB328
    /* li r5, 3 */ // 0x806BB32C
    FUN_806FEC8C(r4, r7, r5); // bl 0x806FEC8C
    if (==) goto 0x0x806bb408;
    /* lis r3, 0 */ // 0x806BB33C
    r3 = *(0 + r3); // lwz @ 0x806BB340
    r3 = *(0 + r3); // lwz @ 0x806BB344
    r29 = *(0x144 + r3); // lwz @ 0x806BB348
    if (!=) goto 0x0x806bb35c;
    /* li r29, 0 */ // 0x806BB354
    /* b 0x806bb3b0 */ // 0x806BB358
    /* lis r30, 0 */ // 0x806BB35C
    r30 = r30 + 0; // 0x806BB360
    if (==) goto 0x0x806bb3ac;
    r12 = *(0 + r29); // lwz @ 0x806BB368
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BB370
    /* mtctr r12 */ // 0x806BB374
    /* bctrl  */ // 0x806BB378
    /* b 0x806bb394 */ // 0x806BB37C
    if (!=) goto 0x0x806bb390;
    /* li r0, 1 */ // 0x806BB388
    /* b 0x806bb3a0 */ // 0x806BB38C
    r3 = *(0 + r3); // lwz @ 0x806BB390
    if (!=) goto 0x0x806bb380;
    /* li r0, 0 */ // 0x806BB39C
    if (==) goto 0x0x806bb3ac;
    /* b 0x806bb3b0 */ // 0x806BB3A8
    /* li r29, 0 */ // 0x806BB3AC
    r12 = *(0 + r29); // lwz @ 0x806BB3B0
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806BB3B8
    /* mtctr r12 */ // 0x806BB3BC
    /* bctrl  */ // 0x806BB3C0
    r12 = *(0 + r29); // lwz @ 0x806BB3C4
    r3 = r29;
    /* li r4, 0x1e18 */ // 0x806BB3CC
    /* li r5, 0 */ // 0x806BB3D0
    r12 = *(0x68 + r12); // lwz @ 0x806BB3D4
    /* mtctr r12 */ // 0x806BB3D8
    /* bctrl  */ // 0x806BB3DC
    r12 = *(0 + r31); // lwz @ 0x806BB3E0
    r3 = r31;
    /* li r4, 0x4f */ // 0x806BB3E8
    /* li r5, 0 */ // 0x806BB3EC
    r12 = *(0x24 + r12); // lwz @ 0x806BB3F0
    /* mtctr r12 */ // 0x806BB3F4
    /* bctrl  */ // 0x806BB3F8
    /* li r0, 3 */ // 0x806BB3FC
    *(0x310 + r31) = r0; // stw @ 0x806BB400
    /* b 0x806bb7d4 */ // 0x806BB404
    r3 = r31;
    FUN_806BBC2C(r3); // bl 0x806BBC2C
    /* b 0x806bb7d4 */ // 0x806BB410
    /* lis r30, 0 */ // 0x806BB414
    r3 = *(0 + r30); // lwz @ 0x806BB418
    r4 = *(0 + r3); // lwz @ 0x806BB41C
    r0 = *(0 + r4); // lwz @ 0x806BB420
    if (==) goto 0x0x806bb438;
    if (==) goto 0x0x806bb48c;
    /* b 0x806bb4a8 */ // 0x806BB434
    FUN_808EDB94(); // bl 0x808EDB94
    r4 = r3;
    if (!=) goto 0x0x806bb46c;
    r3 = *(0 + r30); // lwz @ 0x806BB448
    /* li r4, 0x41 */ // 0x806BB44C
    /* li r5, 0 */ // 0x806BB450
    FUN_80698C44(r4, r4, r5); // bl 0x80698C44
    r3 = *(0 + r30); // lwz @ 0x806BB458
    /* li r4, 0 */ // 0x806BB45C
    /* li r5, 0xff */ // 0x806BB460
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* b 0x806bb4a8 */ // 0x806BB468
    r3 = *(0 + r30); // lwz @ 0x806BB46C
    /* li r5, 0 */ // 0x806BB470
    FUN_80698C44(r5, r5); // bl 0x80698C44
    r3 = *(0 + r30); // lwz @ 0x806BB478
    /* li r4, 0 */ // 0x806BB47C
    /* li r5, 0xff */ // 0x806BB480
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* b 0x806bb4a8 */ // 0x806BB488
    /* li r4, 0x3f */ // 0x806BB48C
    /* li r5, 0 */ // 0x806BB490
    FUN_80698C44(r5, r4, r5); // bl 0x80698C44
    r3 = *(0 + r30); // lwz @ 0x806BB498
    /* li r4, 0 */ // 0x806BB49C
    /* li r5, 0xff */ // 0x806BB4A0
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* li r0, 8 */ // 0x806BB4A8
    *(0x310 + r31) = r0; // stw @ 0x806BB4AC
    /* b 0x806bb7d4 */ // 0x806BB4B0
    /* lis r3, 0 */ // 0x806BB4B4
    r3 = *(0 + r3); // lwz @ 0x806BB4B8
    FUN_806F58E8(r3); // bl 0x806F58E8
    if (!=) goto 0x0x806bb594;
    /* lis r3, 0 */ // 0x806BB4C8
    r3 = *(0 + r3); // lwz @ 0x806BB4CC
    r3 = *(0 + r3); // lwz @ 0x806BB4D0
    r29 = *(0x14c + r3); // lwz @ 0x806BB4D4
    if (!=) goto 0x0x806bb4e8;
    /* li r29, 0 */ // 0x806BB4E0
    /* b 0x806bb53c */ // 0x806BB4E4
    /* lis r30, 0 */ // 0x806BB4E8
    r30 = r30 + 0; // 0x806BB4EC
    if (==) goto 0x0x806bb538;
    r12 = *(0 + r29); // lwz @ 0x806BB4F4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BB4FC
    /* mtctr r12 */ // 0x806BB500
    /* bctrl  */ // 0x806BB504
    /* b 0x806bb520 */ // 0x806BB508
    if (!=) goto 0x0x806bb51c;
    /* li r0, 1 */ // 0x806BB514
    /* b 0x806bb52c */ // 0x806BB518
    r3 = *(0 + r3); // lwz @ 0x806BB51C
    if (!=) goto 0x0x806bb50c;
    /* li r0, 0 */ // 0x806BB528
    if (==) goto 0x0x806bb538;
    /* b 0x806bb53c */ // 0x806BB534
    /* li r29, 0 */ // 0x806BB538
    r12 = *(0 + r29); // lwz @ 0x806BB53C
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806BB544
    /* mtctr r12 */ // 0x806BB548
    /* bctrl  */ // 0x806BB54C
    r12 = *(0 + r29); // lwz @ 0x806BB550
    r3 = r29;
    /* li r4, 0x1e19 */ // 0x806BB558
    /* li r5, 0 */ // 0x806BB55C
    r12 = *(0x68 + r12); // lwz @ 0x806BB560
    /* mtctr r12 */ // 0x806BB564
    /* bctrl  */ // 0x806BB568
    r12 = *(0 + r31); // lwz @ 0x806BB56C
    r3 = r31;
    /* li r4, 0x51 */ // 0x806BB574
    /* li r5, 0 */ // 0x806BB578
    r12 = *(0x24 + r12); // lwz @ 0x806BB57C
    /* mtctr r12 */ // 0x806BB580
    /* bctrl  */ // 0x806BB584
    /* li r0, 4 */ // 0x806BB588
    *(0x310 + r31) = r0; // stw @ 0x806BB58C
    /* b 0x806bb7d4 */ // 0x806BB590
    r3 = r31;
    FUN_806BBC2C(r3); // bl 0x806BBC2C
    /* b 0x806bb7d4 */ // 0x806BB59C
    /* lis r3, 0 */ // 0x806BB5A0
    r3 = *(0 + r3); // lwz @ 0x806BB5A4
    r3 = *(0 + r3); // lwz @ 0x806BB5A8
    r29 = *(0x14c + r3); // lwz @ 0x806BB5AC
    if (!=) goto 0x0x806bb5c0;
    /* li r29, 0 */ // 0x806BB5B8
    /* b 0x806bb614 */ // 0x806BB5BC
    /* lis r30, 0 */ // 0x806BB5C0
    r30 = r30 + 0; // 0x806BB5C4
    if (==) goto 0x0x806bb610;
    r12 = *(0 + r29); // lwz @ 0x806BB5CC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BB5D4
    /* mtctr r12 */ // 0x806BB5D8
    /* bctrl  */ // 0x806BB5DC
    /* b 0x806bb5f8 */ // 0x806BB5E0
    if (!=) goto 0x0x806bb5f4;
    /* li r0, 1 */ // 0x806BB5EC
    /* b 0x806bb604 */ // 0x806BB5F0
    r3 = *(0 + r3); // lwz @ 0x806BB5F4
    if (!=) goto 0x0x806bb5e4;
    /* li r0, 0 */ // 0x806BB600
    if (==) goto 0x0x806bb610;
    /* b 0x806bb614 */ // 0x806BB60C
    /* li r29, 0 */ // 0x806BB610
    r12 = *(0 + r29); // lwz @ 0x806BB614
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806BB61C
    /* mtctr r12 */ // 0x806BB620
    /* bctrl  */ // 0x806BB624
    r12 = *(0 + r29); // lwz @ 0x806BB628
    r3 = r29;
    /* li r4, 0x1e1a */ // 0x806BB630
    /* li r5, 0 */ // 0x806BB634
    r12 = *(0x68 + r12); // lwz @ 0x806BB638
    /* mtctr r12 */ // 0x806BB63C
    /* bctrl  */ // 0x806BB640
    r12 = *(0 + r31); // lwz @ 0x806BB644
    r3 = r31;
    /* li r4, 0x51 */ // 0x806BB64C
    /* li r5, 0 */ // 0x806BB650
    r12 = *(0x24 + r12); // lwz @ 0x806BB654
    /* mtctr r12 */ // 0x806BB658
    /* bctrl  */ // 0x806BB65C
    /* li r0, 5 */ // 0x806BB660
    *(0x310 + r31) = r0; // stw @ 0x806BB664
    /* b 0x806bb7d4 */ // 0x806BB668
    /* lis r3, 0 */ // 0x806BB66C
    r3 = *(0 + r3); // lwz @ 0x806BB670
    r3 = *(0 + r3); // lwz @ 0x806BB674
    r29 = *(0x14c + r3); // lwz @ 0x806BB678
    if (!=) goto 0x0x806bb68c;
    /* li r29, 0 */ // 0x806BB684
    /* b 0x806bb6e0 */ // 0x806BB688
    /* lis r30, 0 */ // 0x806BB68C
    r30 = r30 + 0; // 0x806BB690
    if (==) goto 0x0x806bb6dc;
    r12 = *(0 + r29); // lwz @ 0x806BB698
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BB6A0
    /* mtctr r12 */ // 0x806BB6A4
    /* bctrl  */ // 0x806BB6A8
    /* b 0x806bb6c4 */ // 0x806BB6AC
    if (!=) goto 0x0x806bb6c0;
    /* li r0, 1 */ // 0x806BB6B8
    /* b 0x806bb6d0 */ // 0x806BB6BC
    r3 = *(0 + r3); // lwz @ 0x806BB6C0
    if (!=) goto 0x0x806bb6b0;
    /* li r0, 0 */ // 0x806BB6CC
    if (==) goto 0x0x806bb6dc;
    /* b 0x806bb6e0 */ // 0x806BB6D8
    /* li r29, 0 */ // 0x806BB6DC
    r12 = *(0 + r29); // lwz @ 0x806BB6E0
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806BB6E8
    /* mtctr r12 */ // 0x806BB6EC
    /* bctrl  */ // 0x806BB6F0
    r12 = *(0 + r29); // lwz @ 0x806BB6F4
    r3 = r29;
    /* li r4, 0x1e1b */ // 0x806BB6FC
    /* li r5, 0 */ // 0x806BB700
    r12 = *(0x68 + r12); // lwz @ 0x806BB704
    /* mtctr r12 */ // 0x806BB708
    /* bctrl  */ // 0x806BB70C
    r12 = *(0 + r31); // lwz @ 0x806BB710
    r3 = r31;
    /* li r4, 0x51 */ // 0x806BB718
    /* li r5, 0 */ // 0x806BB71C
    r12 = *(0x24 + r12); // lwz @ 0x806BB720
    /* mtctr r12 */ // 0x806BB724
    /* bctrl  */ // 0x806BB728
    /* li r0, 6 */ // 0x806BB72C
    *(0x310 + r31) = r0; // stw @ 0x806BB730
    /* b 0x806bb7d4 */ // 0x806BB734
    /* lis r30, 0 */ // 0x806BB738
    r3 = *(0 + r30); // lwz @ 0x806BB73C
    r4 = *(0 + r3); // lwz @ 0x806BB740
    r0 = *(0 + r4); // lwz @ 0x806BB744
    if (==) goto 0x0x806bb75c;
    if (==) goto 0x0x806bb7b0;
    /* b 0x806bb7cc */ // 0x806BB758
    FUN_808EDB94(); // bl 0x808EDB94
    r4 = r3;
    if (!=) goto 0x0x806bb790;
    r3 = *(0 + r30); // lwz @ 0x806BB76C
    /* li r4, 0x41 */ // 0x806BB770
    /* li r5, 0 */ // 0x806BB774
    FUN_80698C44(r4, r4, r5); // bl 0x80698C44
    r3 = *(0 + r30); // lwz @ 0x806BB77C
    /* li r4, 0 */ // 0x806BB780
    /* li r5, 0xff */ // 0x806BB784
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* b 0x806bb7cc */ // 0x806BB78C
    r3 = *(0 + r30); // lwz @ 0x806BB790
    /* li r5, 0 */ // 0x806BB794
    FUN_80698C44(r5, r5); // bl 0x80698C44
    r3 = *(0 + r30); // lwz @ 0x806BB79C
    /* li r4, 0 */ // 0x806BB7A0
    /* li r5, 0xff */ // 0x806BB7A4
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* b 0x806bb7cc */ // 0x806BB7AC
    /* li r4, 0x3f */ // 0x806BB7B0
    /* li r5, 0 */ // 0x806BB7B4
    FUN_80698C44(r5, r4, r5); // bl 0x80698C44
    r3 = *(0 + r30); // lwz @ 0x806BB7BC
    /* li r4, 0 */ // 0x806BB7C0
    /* li r5, 0xff */ // 0x806BB7C4
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* li r0, 8 */ // 0x806BB7CC
    *(0x310 + r31) = r0; // stw @ 0x806BB7D0
    r0 = *(0x24 + r1); // lwz @ 0x806BB7D4
    r31 = *(0x1c + r1); // lwz @ 0x806BB7D8
    r30 = *(0x18 + r1); // lwz @ 0x806BB7DC
    r29 = *(0x14 + r1); // lwz @ 0x806BB7E0
    return;
}