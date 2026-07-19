/* Function at 0x805C0488, size=312 bytes */
/* Stack frame: 0 bytes */

int FUN_805C0488(int r3, int r4, int r5, int r6, int r7)
{
    r5 = *(4 + r4); // lwz @ 0x805C0488
    /* li r0, 0x26 */ // 0x805C048C
    *(0x18 + r3) = r5; // stw @ 0x805C0490
    r7 = r3 + 0x23; // 0x805C0494
    r6 = r4 + 0xf; // 0x805C0498
    r5 = *(8 + r4); // lbz @ 0x805C049C
    *(0x1c + r3) = r5; // stb @ 0x805C04A0
    r5 = *(9 + r4); // lbz @ 0x805C04A4
    *(0x1d + r3) = r5; // stb @ 0x805C04A8
    r5 = *(0xc + r4); // lwz @ 0x805C04AC
    *(0x20 + r3) = r5; // stw @ 0x805C04B0
    /* mtctr r0 */ // 0x805C04B4
    r5 = *(1 + r6); // lbz @ 0x805C04B8
    /* lbzu r0, 2(r6) */ // 0x805C04BC
    *(1 + r7) = r5; // stb @ 0x805C04C0
    /* stbu r0, 2(r7) */ // 0x805C04C4
    if (counter-- != 0) goto 0x0x805c04b8;
    r0 = *(0x5c + r4); // lwz @ 0x805C04CC
    *(0x70 + r3) = r0; // stw @ 0x805C04D0
    r0 = *(0x60 + r4); // lbz @ 0x805C04D4
    *(0x74 + r3) = r0; // stb @ 0x805C04D8
    r0 = *(0x61 + r4); // lbz @ 0x805C04DC
    *(0x75 + r3) = r0; // stb @ 0x805C04E0
    r0 = *(0x62 + r4); // lbz @ 0x805C04E4
    *(0x76 + r3) = r0; // stb @ 0x805C04E8
    r0 = *(0x63 + r4); // lbz @ 0x805C04EC
    *(0x77 + r3) = r0; // stb @ 0x805C04F0
    r0 = *(0x64 + r4); // lwz @ 0x805C04F4
    *(0x78 + r3) = r0; // stw @ 0x805C04F8
    r5 = *(0x68 + r4); // lwz @ 0x805C04FC
    r0 = *(0x6c + r4); // lwz @ 0x805C0500
    *(0x80 + r3) = r0; // stw @ 0x805C0504
    *(0x7c + r3) = r5; // stw @ 0x805C0508
    r5 = *(0x70 + r4); // lwz @ 0x805C050C
    r0 = *(0x74 + r4); // lwz @ 0x805C0510
    *(0x88 + r3) = r0; // stw @ 0x805C0514
    *(0x84 + r3) = r5; // stw @ 0x805C0518
    r5 = *(0x78 + r4); // lwz @ 0x805C051C
    r0 = *(0x7c + r4); // lwz @ 0x805C0520
    *(0x90 + r3) = r0; // stw @ 0x805C0524
    *(0x8c + r3) = r5; // stw @ 0x805C0528
    r5 = *(0x80 + r4); // lwz @ 0x805C052C
    r0 = *(0x84 + r4); // lwz @ 0x805C0530
    *(0x98 + r3) = r0; // stw @ 0x805C0534
    *(0x94 + r3) = r5; // stw @ 0x805C0538
    r5 = *(0x88 + r4); // lwz @ 0x805C053C
    r0 = *(0x8c + r4); // lwz @ 0x805C0540
    *(0xa0 + r3) = r0; // stw @ 0x805C0544
    *(0x9c + r3) = r5; // stw @ 0x805C0548
    r5 = *(0x90 + r4); // lwz @ 0x805C054C
    r0 = *(0x94 + r4); // lwz @ 0x805C0550
    *(0xa8 + r3) = r0; // stw @ 0x805C0554
    *(0xa4 + r3) = r5; // stw @ 0x805C0558
    r5 = *(0x98 + r4); // lwz @ 0x805C055C
    r0 = *(0x9c + r4); // lwz @ 0x805C0560
    *(0xb0 + r3) = r0; // stw @ 0x805C0564
    *(0xac + r3) = r5; // stw @ 0x805C0568
    r0 = *(0xa0 + r4); // lwz @ 0x805C056C
    *(0xb4 + r3) = r0; // stw @ 0x805C0570
    r0 = *(0xa4 + r4); // lbz @ 0x805C0574
    *(0xb8 + r3) = r0; // stb @ 0x805C0578
    r0 = *(0xa5 + r4); // lbz @ 0x805C057C
    *(0xb9 + r3) = r0; // stb @ 0x805C0580
    r0 = *(0xa6 + r4); // lbz @ 0x805C0584
    *(0xba + r3) = r0; // stb @ 0x805C0588
    r0 = *(0xa8 + r4); // lwz @ 0x805C058C
    *(0xbc + r3) = r0; // stw @ 0x805C0590
    r0 = *(0xac + r4); // lbz @ 0x805C0594
    *(0xc0 + r3) = r0; // stb @ 0x805C0598
    r0 = *(0xad + r4); // lbz @ 0x805C059C
    *(0xc1 + r3) = r0; // stb @ 0x805C05A0
    r0 = *(0xae + r4); // lbz @ 0x805C05A4
    *(0xc2 + r3) = r0; // stb @ 0x805C05A8
    r0 = *(0xb0 + r4); // lwz @ 0x805C05AC
    *(0xc4 + r3) = r0; // stw @ 0x805C05B0
    r0 = *(0xb4 + r4); // lwz @ 0x805C05B4
    *(0xc8 + r3) = r0; // stw @ 0x805C05B8
    return;
}