/* Function at 0x805F051C, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F051C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805F0530
    r0 = *(0x20 + r4); // lbz @ 0x805F0534
    *(0x20 + r3) = r0; // stb @ 0x805F0538
    r30 = *(0x18 + r3); // lwz @ 0x805F053C
    r0 = *(0x21 + r4); // lbz @ 0x805F0540
    *(0x21 + r3) = r0; // stb @ 0x805F0544
    /* lfs f0, 0x24(r4) */ // 0x805F0548
    /* stfs f0, 0x24(r3) */ // 0x805F054C
    /* lfs f0, 0x28(r4) */ // 0x805F0550
    /* stfs f0, 0x28(r3) */ // 0x805F0554
    /* lfs f1, 0x2c(r4) */ // 0x805F0558
    /* stfs f1, 0x2c(r3) */ // 0x805F055C
    /* lfs f0, 0x30(r4) */ // 0x805F0560
    /* stfs f0, 0x30(r3) */ // 0x805F0564
    /* lfs f0, 0x34(r4) */ // 0x805F0568
    /* stfs f0, 0x34(r3) */ // 0x805F056C
    /* lfs f0, 0x38(r4) */ // 0x805F0570
    /* stfs f0, 0x38(r3) */ // 0x805F0574
    /* lfs f0, 0x3c(r4) */ // 0x805F0578
    /* stfs f0, 0x3c(r3) */ // 0x805F057C
    /* lfs f0, 0x40(r4) */ // 0x805F0580
    /* stfs f0, 0x40(r3) */ // 0x805F0584
    r12 = *(0x44 + r4); // lbz @ 0x805F0588
    *(0x44 + r3) = r12; // stb @ 0x805F058C
    r11 = *(0x45 + r4); // lbz @ 0x805F0590
    *(0x45 + r3) = r11; // stb @ 0x805F0594
    r10 = *(0x46 + r4); // lbz @ 0x805F0598
    *(0x46 + r3) = r10; // stb @ 0x805F059C
    r9 = *(0x47 + r4); // lbz @ 0x805F05A0
    *(0x47 + r3) = r9; // stb @ 0x805F05A4
    r8 = *(0x48 + r4); // lbz @ 0x805F05A8
    *(0x48 + r3) = r8; // stb @ 0x805F05AC
    r7 = *(0x49 + r4); // lbz @ 0x805F05B0
    *(0x49 + r3) = r7; // stb @ 0x805F05B4
    r6 = *(0x4a + r4); // lbz @ 0x805F05B8
    *(0x4a + r3) = r6; // stb @ 0x805F05BC
    r5 = *(0x4b + r4); // lbz @ 0x805F05C0
    *(0x4b + r3) = r5; // stb @ 0x805F05C4
    *(0x4c + r3) = r8; // stb @ 0x805F05C8
    *(0x4d + r3) = r7; // stb @ 0x805F05CC
    *(0x4e + r3) = r6; // stb @ 0x805F05D0
    *(0x4f + r3) = r5; // stb @ 0x805F05D4
    /* lfs f0, 0x50(r4) */ // 0x805F05D8
    /* stfs f0, 0x50(r3) */ // 0x805F05DC
    r0 = *(0x54 + r4); // lbz @ 0x805F05E0
    *(0x54 + r3) = r0; // stb @ 0x805F05E4
    /* stfs f1, 0x14(r30) */ // 0x805F05E8
    /* lfs f0, 0x30(r3) */ // 0x805F05EC
    /* stfs f0, 0x18(r30) */ // 0x805F05F0
    /* lfs f0, 0x34(r3) */ // 0x805F05F4
    r3 = r30;
    *(0x10 + r1) = r8; // stb @ 0x805F05FC
    *(0x11 + r1) = r7; // stb @ 0x805F0600
    *(0x12 + r1) = r6; // stb @ 0x805F0604
    *(0x13 + r1) = r5; // stb @ 0x805F0608
    *(0x14 + r1) = r12; // stb @ 0x805F060C
    *(0x15 + r1) = r11; // stb @ 0x805F0610
    *(0x16 + r1) = r10; // stb @ 0x805F0614
    *(0x17 + r1) = r9; // stb @ 0x805F0618
    /* stfs f0, 0x1c(r30) */ // 0x805F061C
    FUN_805E3430(); // bl 0x805E3430
}