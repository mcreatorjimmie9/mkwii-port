/* Function at 0x807D2780, size=300 bytes */
/* Stack frame: 0 bytes */

int FUN_807D2780(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r4, 0 */ // 0x807D2780
    /* li r5, 0 */ // 0x807D2784
    /* lfs f0, 0(r4) */ // 0x807D2788
    /* lis r4, 0 */ // 0x807D278C
    r4 = r4 + 0; // 0x807D2790
    *(0 + r3) = r4; // stw @ 0x807D2794
    /* li r0, 2 */ // 0x807D2798
    r6 = r3;
    /* li r7, 0 */ // 0x807D27A0
    /* li r4, -1 */ // 0x807D27A4
    *(0xc + r3) = r5; // stw @ 0x807D27A8
    *(0x1a0 + r3) = r5; // stw @ 0x807D27AC
    /* stfs f0, 0x1a4(r3) */ // 0x807D27B0
    *(4 + r3) = r5; // stw @ 0x807D27B4
    *(8 + r3) = r5; // stw @ 0x807D27B8
    /* mtctr r0 */ // 0x807D27BC
    *(0x10 + r6) = r4; // stw @ 0x807D27C0
    r7 = r7 + 0x30; // 0x807D27C4
    *(0x14 + r6) = r4; // stw @ 0x807D27C8
    *(0x18 + r6) = r4; // stw @ 0x807D27CC
    *(0x1c + r6) = r4; // stw @ 0x807D27D0
    *(0x20 + r6) = r4; // stw @ 0x807D27D4
    *(0x24 + r6) = r4; // stw @ 0x807D27D8
    *(0x28 + r6) = r4; // stw @ 0x807D27DC
    *(0x2c + r6) = r4; // stw @ 0x807D27E0
    *(0x30 + r6) = r4; // stw @ 0x807D27E4
    *(0x34 + r6) = r4; // stw @ 0x807D27E8
    *(0x38 + r6) = r4; // stw @ 0x807D27EC
    *(0x3c + r6) = r4; // stw @ 0x807D27F0
    *(0x40 + r6) = r4; // stw @ 0x807D27F4
    *(0x44 + r6) = r4; // stw @ 0x807D27F8
    *(0x48 + r6) = r4; // stw @ 0x807D27FC
    *(0x4c + r6) = r4; // stw @ 0x807D2800
    *(0x50 + r6) = r4; // stw @ 0x807D2804
    *(0x54 + r6) = r4; // stw @ 0x807D2808
    *(0x58 + r6) = r4; // stw @ 0x807D280C
    *(0x5c + r6) = r4; // stw @ 0x807D2810
    *(0x60 + r6) = r4; // stw @ 0x807D2814
    *(0x64 + r6) = r4; // stw @ 0x807D2818
    *(0x68 + r6) = r4; // stw @ 0x807D281C
    *(0x6c + r6) = r4; // stw @ 0x807D2820
    *(0x70 + r6) = r4; // stw @ 0x807D2824
    *(0x74 + r6) = r4; // stw @ 0x807D2828
    *(0x78 + r6) = r4; // stw @ 0x807D282C
    *(0x7c + r6) = r4; // stw @ 0x807D2830
    *(0x80 + r6) = r4; // stw @ 0x807D2834
    *(0x84 + r6) = r4; // stw @ 0x807D2838
    *(0x88 + r6) = r4; // stw @ 0x807D283C
    *(0x8c + r6) = r4; // stw @ 0x807D2840
    *(0x90 + r6) = r4; // stw @ 0x807D2844
    *(0x94 + r6) = r4; // stw @ 0x807D2848
    *(0x98 + r6) = r4; // stw @ 0x807D284C
    *(0x9c + r6) = r4; // stw @ 0x807D2850
    *(0xa0 + r6) = r4; // stw @ 0x807D2854
    *(0xa4 + r6) = r4; // stw @ 0x807D2858
    *(0xa8 + r6) = r4; // stw @ 0x807D285C
    *(0xac + r6) = r4; // stw @ 0x807D2860
    *(0xb0 + r6) = r4; // stw @ 0x807D2864
    *(0xb4 + r6) = r4; // stw @ 0x807D2868
    *(0xb8 + r6) = r4; // stw @ 0x807D286C
    *(0xbc + r6) = r4; // stw @ 0x807D2870
    *(0xc0 + r6) = r4; // stw @ 0x807D2874
    *(0xc4 + r6) = r4; // stw @ 0x807D2878
    *(0xc8 + r6) = r4; // stw @ 0x807D287C
    *(0xcc + r6) = r4; // stw @ 0x807D2880
    r6 = r6 + 0xc0; // 0x807D2884
    if (counter-- != 0) goto 0x0x807d27c0;
    /* slwi r4, r7, 2 */ // 0x807D288C
    /* li r0, -1 */ // 0x807D2890
    r4 = r3 + r4; // 0x807D2894
    *(0x10 + r4) = r0; // stw @ 0x807D2898
    *(0x14 + r4) = r0; // stw @ 0x807D289C
    *(0x18 + r4) = r0; // stw @ 0x807D28A0
    *(0x1c + r4) = r0; // stw @ 0x807D28A4
    return;
}