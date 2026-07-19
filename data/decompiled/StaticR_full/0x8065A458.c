/* Function at 0x8065A458, size=488 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_8065A458(int r3, int r4, int r5, int r6, int r7, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8065A470
    *(0x10 + r1) = r28; // stw @ 0x8065A474
    r0 = *(0x7c + r3); // lwz @ 0x8065A478
    if (<) goto 0x0x8065a564;
    /* lis r30, 0 */ // 0x8065A484
    r3 = *(0 + r30); // lwz @ 0x8065A488
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x8065a620;
    r3 = *(0 + r30); // lwz @ 0x8065A498
    FUN_806F58E8(); // bl 0x806F58E8
    if (==) goto 0x0x8065a4b0;
    if (!=) goto 0x0x8065a564;
    /* lis r30, 0 */ // 0x8065A4B0
    r3 = *(0 + r30); // lwz @ 0x8065A4B4
    FUN_806F58E8(); // bl 0x806F58E8
    if (!=) goto 0x0x8065a4e4;
    r3 = *(0 + r30); // lwz @ 0x8065A4C4
    FUN_806F5918(); // bl 0x806F5918
    if (!=) goto 0x0x8065a4e4;
    /* lis r3, 0 */ // 0x8065A4D4
    r3 = *(0 + r3); // lwz @ 0x8065A4D8
    r3 = *(0x90 + r3); // lwz @ 0x8065A4DC
    FUN_806845A4(r3); // bl 0x806845A4
    r0 = *(0x70 + r31); // lbz @ 0x8065A4E4
    r4 = r31 + 0x10; // 0x8065A4E8
    *(8 + r1) = r0; // stw @ 0x8065A4EC
    r0 = *(0x7c + r31); // lwz @ 0x8065A4F0
    r3 = *(4 + r31); // lwz @ 0x8065A4F4
    /* mulli r0, r0, 0x1d8 */ // 0x8065A4F8
    r5 = *(0x68 + r31); // lwz @ 0x8065A4FC
    r6 = *(0x6c + r31); // lhz @ 0x8065A500
    r7 = *(0x6e + r31); // lhz @ 0x8065A504
    r3 = r3 + r0; // 0x8065A508
    r9 = *(0x60 + r31); // lwz @ 0x8065A50C
    r10 = *(0x64 + r31); // lwz @ 0x8065A510
    r3 = r3 + 8; // 0x8065A514
    FUN_805A95AC(r3); // bl 0x805A95AC
    /* lis r3, 0 */ // 0x8065A51C
    /* li r5, 1 */ // 0x8065A520
    r6 = *(0 + r3); // lwz @ 0x8065A524
    r0 = *(0x36 + r6); // lha @ 0x8065A528
    if (<) goto 0x0x8065a550;
    /* lis r3, 1 */ // 0x8065A534
    /* clrlwi r4, r0, 0x18 */ // 0x8065A538
    r0 = r3 + -0x6c10; // 0x8065A53C
    r0 = r0 * r4; // 0x8065A540
    r3 = r6 + r0; // 0x8065A544
    r3 = r3 + 0x38; // 0x8065A548
    /* b 0x8065a554 */ // 0x8065A54C
    /* li r3, 0 */ // 0x8065A550
    /* addis r3, r3, 1 */ // 0x8065A554
    /* li r0, 1 */ // 0x8065A558
    *(-0x6c67 + r3) = r5; // stb @ 0x8065A55C
    *(0x78 + r31) = r0; // stb @ 0x8065A560
    r3 = *(0x7c + r31); // lwz @ 0x8065A564
    /* lis r30, 0 */ // 0x8065A568
    r28 = r3 + 1; // 0x8065A56C
    /* mulli r29, r28, 0x1d8 */ // 0x8065A570
    /* b 0x8065a5f0 */ // 0x8065A574
    r0 = *(4 + r31); // lwz @ 0x8065A578
    r3 = r0 + r29; // 0x8065A57C
    r3 = *(0x20 + r3); // lhz @ 0x8065A580
    /* clrlwi. r0, r3, 0x1f */ // 0x8065A584
    if (!=) goto 0x0x8065a594;
    /* li r0, 0 */ // 0x8065A58C
    /* b 0x8065a5a4 */ // 0x8065A590
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x8065A594
    /* li r0, 2 */ // 0x8065A598
    if (==) goto 0x0x8065a5a4;
    /* li r0, 1 */ // 0x8065A5A0
    if (!=) goto 0x0x8065a5e8;
    r3 = *(0 + r30); // lwz @ 0x8065A5AC
    r4 = r28;
    FUN_806EEEA4(r4); // bl 0x806EEEA4
    if (==) goto 0x0x8065a5e8;
    /* mulli r0, r28, 0x1d8 */ // 0x8065A5C0
    r4 = *(4 + r31); // lwz @ 0x8065A5C4
    /* lis r3, 0 */ // 0x8065A5C8
    r3 = *(0 + r3); // lwz @ 0x8065A5CC
    r5 = r31 + 0x10; // 0x8065A5D0
    r4 = r4 + r0; // 0x8065A5D4
    /* li r6, 1 */ // 0x8065A5D8
    FUN_80700C10(r3, r5, r6); // bl 0x80700C10
    *(0x7c + r31) = r28; // stw @ 0x8065A5E0
    /* b 0x8065a620 */ // 0x8065A5E4
    r29 = r29 + 0x1d8; // 0x8065A5E8
    r28 = r28 + 1; // 0x8065A5EC
    if (<) goto 0x0x8065a578;
    r0 = *(8 + r31); // lbz @ 0x8065A5F8
    if (==) goto 0x0x8065a620;
    r12 = *(0 + r31); // lwz @ 0x8065A604
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x8065A60C
    /* mtctr r12 */ // 0x8065A610
    /* bctrl  */ // 0x8065A614
    /* li r0, 0 */ // 0x8065A618
    *(8 + r31) = r0; // stb @ 0x8065A61C
    r0 = *(0x24 + r1); // lwz @ 0x8065A620
    r31 = *(0x1c + r1); // lwz @ 0x8065A624
    r30 = *(0x18 + r1); // lwz @ 0x8065A628
    r29 = *(0x14 + r1); // lwz @ 0x8065A62C
    r28 = *(0x10 + r1); // lwz @ 0x8065A630
    return;
}