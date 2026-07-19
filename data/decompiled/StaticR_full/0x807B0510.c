/* Function at 0x807B0510, size=384 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_807B0510(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807B0518
    /* li r5, 1 */ // 0x807B051C
    *(0x24 + r1) = r0; // stw @ 0x807B0520
    /* li r0, 0 */ // 0x807B0524
    /* lfs f1, 0(r4) */ // 0x807B0528
    *(0x1c + r1) = r31; // stw @ 0x807B052C
    *(0x18 + r1) = r30; // stw @ 0x807B0530
    /* lis r30, 0 */ // 0x807B0534
    r30 = r30 + 0; // 0x807B0538
    *(0x14 + r1) = r29; // stw @ 0x807B053C
    r29 = r3;
    /* stfs f1, 0x18(r3) */ // 0x807B0544
    r4 = *(0 + r3); // lwz @ 0x807B0548
    *(0x1c + r3) = r5; // stb @ 0x807B054C
    /* stfs f1, 0xc(r3) */ // 0x807B0550
    /* stfs f1, 0x10(r3) */ // 0x807B0554
    *(8 + r4) = r0; // stw @ 0x807B0558
    r3 = *(0 + r3); // lwz @ 0x807B055C
    FUN_807D021C(); // bl 0x807D021C
    r3 = *(0 + r29); // lwz @ 0x807B0564
    /* li r4, 0 */ // 0x807B0568
    /* lfs f1, 0x70(r30) */ // 0x807B056C
    /* lfs f2, 0x78(r30) */ // 0x807B0570
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x78(r30) */ // 0x807B0578
    /* lfs f1, 0x14(r29) */ // 0x807B057C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B0580
    if (<=) goto 0x0x807b058c;
    /* b 0x807b0590 */ // 0x807B0588
    /* fmr f1, f0 */ // 0x807B058C
    /* stfs f1, 0x14(r29) */ // 0x807B0590
    /* lis r31, 0 */ // 0x807B0594
    r3 = *(4 + r29); // lwz @ 0x807B0598
    /* li r0, 0 */ // 0x807B059C
    /* lfs f1, 0(r31) */ // 0x807B05A0
    *(8 + r3) = r0; // stw @ 0x807B05A4
    r3 = *(4 + r29); // lwz @ 0x807B05A8
    FUN_807D021C(); // bl 0x807D021C
    /* lis r4, 0 */ // 0x807B05B0
    r3 = *(4 + r29); // lwz @ 0x807B05B4
    /* lfs f1, 0(r4) */ // 0x807B05B8
    /* li r4, 0 */ // 0x807B05BC
    /* lfs f2, 0x7c(r30) */ // 0x807B05C0
    FUN_807D0288(r4, r4); // bl 0x807D0288
    r3 = *(4 + r29); // lwz @ 0x807B05C8
    /* li r4, 0 */ // 0x807B05CC
    /* lfs f1, 0(r31) */ // 0x807B05D0
    /* lfs f2, 0x80(r30) */ // 0x807B05D4
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x78(r30) */ // 0x807B05DC
    /* lfs f1, 0x14(r29) */ // 0x807B05E0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B05E4
    if (<=) goto 0x0x807b05f0;
    /* b 0x807b05f4 */ // 0x807B05EC
    /* fmr f1, f0 */ // 0x807B05F0
    /* stfs f1, 0x14(r29) */ // 0x807B05F4
    /* lis r31, 0 */ // 0x807B05F8
    r3 = *(8 + r29); // lwz @ 0x807B05FC
    /* li r0, 0 */ // 0x807B0600
    /* lfs f1, 0(r31) */ // 0x807B0604
    *(8 + r3) = r0; // stw @ 0x807B0608
    r3 = *(8 + r29); // lwz @ 0x807B060C
    FUN_807D021C(); // bl 0x807D021C
    r3 = *(8 + r29); // lwz @ 0x807B0614
    /* li r4, 0 */ // 0x807B0618
    /* lfs f1, 0(r31) */ // 0x807B061C
    /* lfs f2, 0x7c(r30) */ // 0x807B0620
    FUN_807D0288(r4); // bl 0x807D0288
    /* lis r4, 0 */ // 0x807B0628
    r3 = *(8 + r29); // lwz @ 0x807B062C
    /* lfs f1, 0(r4) */ // 0x807B0630
    /* lfs f2, 0x80(r30) */ // 0x807B0634
    r4 = *(0x8c + r30); // lha @ 0x807B0638
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f1, 0x7c(r30) */ // 0x807B0640
    /* lfs f0, 0x80(r30) */ // 0x807B0644
    /* lfs f2, 0x14(r29) */ // 0x807B0648
    /* fadds f0, f1, f0 */ // 0x807B064C
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807B0650
    if (<=) goto 0x0x807b065c;
    /* b 0x807b0660 */ // 0x807B0658
    /* fmr f2, f0 */ // 0x807B065C
    /* li r0, 0 */ // 0x807B0660
    /* stfs f2, 0x14(r29) */ // 0x807B0664
    *(0x1c + r29) = r0; // stb @ 0x807B0668
    /* lfs f0, 0x74(r30) */ // 0x807B066C
    /* stfs f0, 0x10(r29) */ // 0x807B0670
    r31 = *(0x1c + r1); // lwz @ 0x807B0674
    r30 = *(0x18 + r1); // lwz @ 0x807B0678
    r29 = *(0x14 + r1); // lwz @ 0x807B067C
    r0 = *(0x24 + r1); // lwz @ 0x807B0680
    return;
}