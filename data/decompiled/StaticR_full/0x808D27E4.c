/* Function at 0x808D27E4, size=288 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808D27E4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0x4330 */ // 0x808D27EC
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x808D27FC
    r30 = r5;
    *(0x24 + r1) = r29; // stw @ 0x808D2804
    r29 = r4;
    r0 = *(0x240 + r4); // lwz @ 0x808D280C
    *(0x143c + r3) = r0; // stw @ 0x808D2810
    /* li r3, 0x7a */ // 0x808D2814
    *(8 + r1) = r6; // stw @ 0x808D2818
    *(0x10 + r1) = r6; // stw @ 0x808D281C
    FUN_808E8220(r3); // bl 0x808E8220
    r4 = r31;
    r5 = r29;
    r6 = r30;
    FUN_808E8450(r4, r5, r6); // bl 0x808E8450
    /* lis r3, 0x6666 */ // 0x808D2834
    r8 = *(0x143c + r31); // lwz @ 0x808D2838
    r0 = r3 + 0x6667; // 0x808D283C
    /* lis r4, 0 */ // 0x808D2840
    /* mulhw r0, r0, r8 */ // 0x808D2844
    /* lfs f5, 0(r4) */ // 0x808D2848
    /* lis r3, 0 */ // 0x808D284C
    /* lis r5, 0 */ // 0x808D2850
    /* lfs f4, 0(r3) */ // 0x808D2854
    /* lfd f6, 0(r5) */ // 0x808D2858
    r4 = r0 >> 1; // srawi
    /* lis r5, 0 */ // 0x808D2860
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x808D2868
    /* srwi r7, r4, 0x1f */ // 0x808D286C
    r0 = r0 + r3; // 0x808D2870
    r5 = r5 + 0; // 0x808D2874
    /* mulli r6, r0, 5 */ // 0x808D2878
    r7 = r4 + r7; // 0x808D287C
    r4 = r5 + 0xf7; // 0x808D2880
    r0 = r7 + 1; // 0x808D2884
    /* subf r8, r6, r8 */ // 0x808D2888
    /* xoris r5, r7, 0x8000 */ // 0x808D288C
    /* xoris r7, r8, 0x8000 */ // 0x808D2890
    *(0xc + r1) = r7; // stw @ 0x808D2894
    r6 = r8 + 1; // 0x808D2898
    /* xoris r0, r0, 0x8000 */ // 0x808D289C
    /* lfd f0, 8(r1) */ // 0x808D28A0
    /* xoris r6, r6, 0x8000 */ // 0x808D28A4
    *(0x14 + r1) = r6; // stw @ 0x808D28A8
    r3 = r31 + 0x1458; // 0x808D28AC
    /* fsubs f1, f0, f6 */ // 0x808D28B0
    /* lfd f0, 0x10(r1) */ // 0x808D28B4
    *(0xc + r1) = r5; // stw @ 0x808D28B8
    /* fsubs f2, f0, f6 */ // 0x808D28BC
    *(0x14 + r1) = r0; // stw @ 0x808D28C0
    /* fmuls f1, f5, f1 */ // 0x808D28C4
    /* lfd f3, 8(r1) */ // 0x808D28C8
    /* lfd f0, 0x10(r1) */ // 0x808D28CC
    /* fmuls f2, f5, f2 */ // 0x808D28D0
    /* fsubs f3, f3, f6 */ // 0x808D28D4
    /* fsubs f0, f0, f6 */ // 0x808D28D8
    /* fmuls f3, f4, f3 */ // 0x808D28DC
    /* fmuls f4, f4, f0 */ // 0x808D28E0
    FUN_806A1244(); // bl 0x806A1244
    r0 = *(0x34 + r1); // lwz @ 0x808D28E8
    r31 = *(0x2c + r1); // lwz @ 0x808D28EC
    r30 = *(0x28 + r1); // lwz @ 0x808D28F0
    r29 = *(0x24 + r1); // lwz @ 0x808D28F4
    return;
}