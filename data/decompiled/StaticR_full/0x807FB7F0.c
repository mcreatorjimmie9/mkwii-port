/* Function at 0x807FB7F0, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807FB7F0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807FB7F8
    /* lfs f1, 0(r4) */ // 0x807FB800
    /* li r4, 0 */ // 0x807FB804
    *(0x1c + r1) = r31; // stw @ 0x807FB808
    /* lis r31, 0 */ // 0x807FB80C
    /* lfs f2, 0(r31) */ // 0x807FB810
    *(0x18 + r1) = r30; // stw @ 0x807FB814
    r30 = r3;
    /* stfs f1, 0xb0(r3) */ // 0x807FB81C
    r5 = *(8 + r3); // lwz @ 0x807FB820
    /* stfs f1, 0xb4(r3) */ // 0x807FB824
    /* stfs f2, 0xb8(r3) */ // 0x807FB828
    r3 = *(0x28 + r5); // lwz @ 0x807FB82C
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = *(8 + r30); // lwz @ 0x807FB834
    /* li r4, 0 */ // 0x807FB838
    r3 = *(0x28 + r3); // lwz @ 0x807FB83C
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807FB844
    r12 = *(8 + r12); // lwz @ 0x807FB848
    /* mtctr r12 */ // 0x807FB84C
    /* bctrl  */ // 0x807FB850
    /* fctiwz f0, f1 */ // 0x807FB854
    /* lis r0, 0x4330 */ // 0x807FB858
    /* lis r3, 0 */ // 0x807FB85C
    /* lis r4, 0 */ // 0x807FB860
    /* stfd f0, 8(r1) */ // 0x807FB864
    /* lfd f1, 0(r3) */ // 0x807FB868
    r5 = *(0xc + r1); // lwz @ 0x807FB86C
    *(0x10 + r1) = r0; // stw @ 0x807FB870
    /* xoris r0, r5, 0x8000 */ // 0x807FB874
    r4 = *(0 + r4); // lwz @ 0x807FB878
    *(0x14 + r1) = r0; // stw @ 0x807FB87C
    r3 = *(4 + r4); // lwz @ 0x807FB880
    /* lfd f0, 0x10(r1) */ // 0x807FB884
    /* fsubs f1, f0, f1 */ // 0x807FB888
    FUN_805E3728(); // bl 0x805E3728
    r3 = *(8 + r30); // lwz @ 0x807FB890
    /* li r4, 0 */ // 0x807FB894
    /* lfs f2, 0(r31) */ // 0x807FB898
    r3 = *(0x28 + r3); // lwz @ 0x807FB89C
    FUN_805E70EC(r4); // bl 0x805E70EC
    r0 = *(0x24 + r1); // lwz @ 0x807FB8A4
    r31 = *(0x1c + r1); // lwz @ 0x807FB8A8
    r30 = *(0x18 + r1); // lwz @ 0x807FB8AC
    return;
}