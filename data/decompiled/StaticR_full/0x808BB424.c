/* Function at 0x808BB424, size=532 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_808BB424(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808BB438
    *(0x14 + r1) = r29; // stw @ 0x808BB43C
    r29 = *(0x23d8 + r3); // lwz @ 0x808BB440
    /* cmpwi cr1, r29, 0 */
    if (!=) goto 0x0x808bb454;
    FUN_808B3EEC(); // bl 0x808B3EEC
    /* b 0x808bb61c */ // 0x808BB450
    /* lis r3, 0 */ // 0x808BB454
    r3 = *(0 + r3); // lwz @ 0x808BB458
    r3 = *(0 + r3); // lwz @ 0x808BB45C
    r3 = *(0 + r3); // lwz @ 0x808BB460
    if (!=) goto 0x0x808bb4f0;
    if (!=) goto 0x0x808bb478;
    /* li r29, 0 */ // 0x808BB470
    /* b 0x808bb4cc */ // 0x808BB474
    /* lis r30, 0 */ // 0x808BB478
    r30 = r30 + 0; // 0x808BB47C
    if (==) goto 0x0x808bb4c8;
    r12 = *(0 + r29); // lwz @ 0x808BB484
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808BB48C
    /* mtctr r12 */ // 0x808BB490
    /* bctrl  */ // 0x808BB494
    /* b 0x808bb4b0 */ // 0x808BB498
    if (!=) goto 0x0x808bb4ac;
    /* li r0, 1 */ // 0x808BB4A4
    /* b 0x808bb4bc */ // 0x808BB4A8
    r3 = *(0 + r3); // lwz @ 0x808BB4AC
    if (!=) goto 0x0x808bb49c;
    /* li r0, 0 */ // 0x808BB4B8
    if (==) goto 0x0x808bb4c8;
    /* b 0x808bb4cc */ // 0x808BB4C4
    /* li r29, 0 */ // 0x808BB4C8
    r0 = *(0x270 + r29); // lwz @ 0x808BB4CC
    if (!=) goto 0x0x808bb61c;
    /* lis r4, 0 */ // 0x808BB4D8
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808BB4E0
    /* li r4, 0x41 */ // 0x808BB4E4
    FUN_808B40AC(r4, r3, r4); // bl 0x808B40AC
    /* b 0x808bb61c */ // 0x808BB4EC
    FUN_808CF8D8(r3, r4); // bl 0x808CF8D8
    if (==) goto 0x0x808bb61c;
    r4 = *(0x23dc + r31); // lwz @ 0x808BB4FC
    if (==) goto 0x0x808bb534;
    /* lis r3, 0 */ // 0x808BB508
    /* lfs f1, 0(r4) */ // 0x808BB50C
    /* lfs f0, 0(r3) */ // 0x808BB510
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808BB514
    /* cror cr0eq, cr0lt, cr0eq */ // 0x808BB518
    /* mfcr r0 */ // 0x808BB51C
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x808BB520
    if (==) goto 0x0x808bb534;
    /* li r0, 0 */ // 0x808BB528
    *(0x23d8 + r31) = r0; // stw @ 0x808BB52C
    /* b 0x808bb61c */ // 0x808BB530
    r29 = *(0x23d8 + r31); // lwz @ 0x808BB534
    if (!=) goto 0x0x808bb548;
    /* li r29, 0 */ // 0x808BB540
    /* b 0x808bb59c */ // 0x808BB544
    /* lis r30, 0 */ // 0x808BB548
    r30 = r30 + 0; // 0x808BB54C
    if (==) goto 0x0x808bb598;
    r12 = *(0 + r29); // lwz @ 0x808BB554
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808BB55C
    /* mtctr r12 */ // 0x808BB560
    /* bctrl  */ // 0x808BB564
    /* b 0x808bb580 */ // 0x808BB568
    if (!=) goto 0x0x808bb57c;
    /* li r0, 1 */ // 0x808BB574
    /* b 0x808bb58c */ // 0x808BB578
    r3 = *(0 + r3); // lwz @ 0x808BB57C
    if (!=) goto 0x0x808bb56c;
    /* li r0, 0 */ // 0x808BB588
    if (==) goto 0x0x808bb598;
    /* b 0x808bb59c */ // 0x808BB594
    /* li r29, 0 */ // 0x808BB598
    r0 = *(0x270 + r29); // lwz @ 0x808BB59C
    if (==) goto 0x0x808bb5b4;
    if (==) goto 0x0x808bb5f8;
    /* b 0x808bb614 */ // 0x808BB5B0
    r3 = *(0x424 + r31); // lwz @ 0x808BB5B4
    if (!=) goto 0x0x808bb5c8;
    /* li r0, -1 */ // 0x808BB5C0
    /* b 0x808bb5d0 */ // 0x808BB5C4
    r0 = *(0x20 + r31); // lwz @ 0x808BB5C8
    /* subf r0, r3, r0 */ // 0x808BB5CC
    if (!=) goto 0x0x808bb614;
    /* lis r5, 0 */ // 0x808BB5D8
    r3 = r31;
    r0 = *(0 + r5); // lwz @ 0x808BB5E0
    *(8 + r1) = r0; // stw @ 0x808BB5E8
    /* li r5, 1 */ // 0x808BB5EC
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    /* b 0x808bb614 */ // 0x808BB5F4
    /* lis r4, 0 */ // 0x808BB5F8
    /* li r0, -1 */ // 0x808BB5FC
    /* lfs f1, 0(r4) */ // 0x808BB600
    r3 = r31;
    *(0x3e8 + r31) = r0; // stw @ 0x808BB608
    /* li r4, 0 */ // 0x808BB60C
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 0 */ // 0x808BB614
    *(0x23d8 + r31) = r0; // stw @ 0x808BB618
    r0 = *(0x24 + r1); // lwz @ 0x808BB61C
    r31 = *(0x1c + r1); // lwz @ 0x808BB620
    r30 = *(0x18 + r1); // lwz @ 0x808BB624
    r29 = *(0x14 + r1); // lwz @ 0x808BB628
    return;
}