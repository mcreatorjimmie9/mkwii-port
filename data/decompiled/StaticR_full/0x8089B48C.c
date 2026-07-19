/* Function at 0x8089B48C, size=472 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8089B48C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x8089B494
    *(0x3c + r1) = r31; // stw @ 0x8089B49C
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x8089B4A4
    r30 = r3;
    FUN_8089BC74(); // bl 0x8089BC74
    r0 = *(0x54 + r30); // lbz @ 0x8089B4B0
    /* lis r5, 0 */ // 0x8089B4B4
    r4 = *(0x30 + r30); // lwz @ 0x8089B4B8
    r5 = r5 + 0; // 0x8089B4BC
    r3 = *(0x34 + r30); // lwz @ 0x8089B4C0
    r0 = *(0x38 + r30); // lwz @ 0x8089B4C8
    *(0 + r30) = r5; // stw @ 0x8089B4CC
    *(0x104 + r30) = r4; // stw @ 0x8089B4D0
    *(0x108 + r30) = r3; // stw @ 0x8089B4D4
    *(0x10c + r30) = r0; // stw @ 0x8089B4D8
    if (==) goto 0x0x8089b4e8;
    r3 = r30 + 0x48; // 0x8089B4E0
    /* b 0x8089b518 */ // 0x8089B4E4
    /* li r0, 1 */ // 0x8089B4E8
    *(0x54 + r30) = r0; // stb @ 0x8089B4EC
    r4 = r30 + 0x58; // 0x8089B4F4
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x8089B4FC
    r3 = r30 + 0x48; // 0x8089B500
    /* stfs f0, 0x48(r30) */ // 0x8089B504
    /* lfs f0, 0xc(r1) */ // 0x8089B508
    /* stfs f0, 0x4c(r30) */ // 0x8089B50C
    /* lfs f0, 0x10(r1) */ // 0x8089B510
    /* stfs f0, 0x50(r30) */ // 0x8089B514
    r7 = *(0 + r3); // lwz @ 0x8089B518
    r6 = *(4 + r3); // lwz @ 0x8089B51C
    r5 = *(8 + r3); // lwz @ 0x8089B520
    r4 = *(0x3c + r30); // lwz @ 0x8089B524
    r3 = *(0x40 + r30); // lwz @ 0x8089B528
    r0 = *(0x44 + r30); // lwz @ 0x8089B52C
    *(0x110 + r30) = r7; // stw @ 0x8089B530
    *(0x114 + r30) = r6; // stw @ 0x8089B534
    *(0x118 + r30) = r5; // stw @ 0x8089B538
    *(0x11c + r30) = r4; // stw @ 0x8089B53C
    *(0x120 + r30) = r3; // stw @ 0x8089B540
    *(0x124 + r30) = r0; // stw @ 0x8089B544
    r3 = *(0 + r31); // lwz @ 0x8089B548
    r0 = *(0x30 + r3); // lha @ 0x8089B54C
    *(0x128 + r30) = r0; // sth @ 0x8089B550
    r3 = *(0 + r31); // lwz @ 0x8089B554
    r0 = *(0x2c + r3); // lha @ 0x8089B558
    *(0x12a + r30) = r0; // sth @ 0x8089B55C
    r3 = *(0 + r31); // lwz @ 0x8089B564
    r0 = *(0x32 + r3); // lha @ 0x8089B568
    *(0x12c + r30) = r0; // sth @ 0x8089B56C
    r3 = *(0 + r31); // lwz @ 0x8089B570
    r0 = *(0x2e + r3); // lha @ 0x8089B574
    *(0x12e + r30) = r0; // sth @ 0x8089B578
    r3 = *(0 + r31); // lwz @ 0x8089B57C
    r0 = *(0x34 + r3); // lha @ 0x8089B580
    *(0x130 + r30) = r0; // sth @ 0x8089B584
    r3 = *(0 + r31); // lwz @ 0x8089B588
    r3 = *(0x2a + r3); // lha @ 0x8089B58C
    r0 = r3 + -1; // 0x8089B590
    /* cntlzw r0, r0 */ // 0x8089B594
    /* srwi r0, r0, 5 */ // 0x8089B598
    *(0x13c + r30) = r0; // stb @ 0x8089B59C
    if (>=) goto 0x0x8089b5ac;
    /* li r0, 2 */ // 0x8089B5A4
    *(0x12a + r30) = r0; // sth @ 0x8089B5A8
    r0 = *(0x12c + r30); // lha @ 0x8089B5AC
    if (>=) goto 0x0x8089b5c0;
    /* li r0, 2 */ // 0x8089B5B8
    *(0x12c + r30) = r0; // sth @ 0x8089B5BC
    r3 = *(0x12a + r30); // lha @ 0x8089B5C0
    /* lis r7, 0x4330 */ // 0x8089B5C4
    r0 = *(0x12c + r30); // lha @ 0x8089B5C8
    /* lis r5, 0 */ // 0x8089B5CC
    /* xoris r3, r3, 0x8000 */ // 0x8089B5D0
    *(0x24 + r1) = r3; // stw @ 0x8089B5D4
    /* xoris r0, r0, 0x8000 */ // 0x8089B5D8
    /* lfd f3, 0(r5) */ // 0x8089B5DC
    *(0x20 + r1) = r7; // stw @ 0x8089B5E0
    /* lis r6, 0 */ // 0x8089B5E4
    /* lfs f2, 0(r6) */ // 0x8089B5E8
    r4 = r30;
    /* lfd f0, 0x20(r1) */ // 0x8089B5F0
    *(0x2c + r1) = r0; // stw @ 0x8089B5F8
    /* li r5, 0 */ // 0x8089B5FC
    /* fsubs f1, f0, f3 */ // 0x8089B600
    *(0x28 + r1) = r7; // stw @ 0x8089B604
    /* lfd f0, 0x28(r1) */ // 0x8089B608
    /* fdivs f1, f2, f1 */ // 0x8089B60C
    /* stfs f1, 0x134(r30) */ // 0x8089B610
    /* fsubs f0, f0, f3 */ // 0x8089B614
    /* fdivs f0, f2, f0 */ // 0x8089B618
    /* stfs f0, 0x138(r30) */ // 0x8089B61C
    FUN_8089B708(); // bl 0x8089B708
    r0 = *(0x2c + r30); // lhz @ 0x8089B624
    r3 = r30;
    /* lfs f0, 0x1c(r1) */ // 0x8089B62C
    /* lfs f1, 0x18(r1) */ // 0x8089B630
    r0 = r0 | 1; // 0x8089B634
    /* lfs f2, 0x14(r1) */ // 0x8089B638
    /* stfs f2, 0x30(r30) */ // 0x8089B63C
    *(0x2c + r30) = r0; // sth @ 0x8089B640
    /* stfs f1, 0x34(r30) */ // 0x8089B644
    /* stfs f0, 0x38(r30) */ // 0x8089B648
    r31 = *(0x3c + r1); // lwz @ 0x8089B64C
    r30 = *(0x38 + r1); // lwz @ 0x8089B650
    r0 = *(0x44 + r1); // lwz @ 0x8089B654
    return;
}