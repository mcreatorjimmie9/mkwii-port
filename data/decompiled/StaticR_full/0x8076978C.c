/* Function at 0x8076978C, size=264 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8076978C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8076979C
    *(0x28 + r1) = r30; // stw @ 0x807697A0
    /* lis r30, 0 */ // 0x807697A4
    *(0x24 + r1) = r29; // stw @ 0x807697A8
    /* lis r29, 0 */ // 0x807697AC
    r29 = r29 + 0; // 0x807697B0
    *(0x20 + r1) = r28; // stw @ 0x807697B4
    r28 = r3;
    /* lfs f0, 4(r29) */ // 0x807697BC
    /* stfs f0, 0xf4(r3) */ // 0x807697C0
    /* lfs f1, 0x9c(r29) */ // 0x807697C4
    /* stfs f0, 0xfc(r3) */ // 0x807697C8
    /* stfs f0, 0x100(r3) */ // 0x807697CC
    /* stfs f0, 0x108(r3) */ // 0x807697D0
    /* stfs f0, 0x10c(r3) */ // 0x807697D4
    /* stfs f0, 0x4cc(r3) */ // 0x807697D8
    /* lfs f0, 0(r31) */ // 0x807697DC
    r3 = *(0 + r30); // lwz @ 0x807697E0
    /* fmuls f1, f1, f0 */ // 0x807697E4
    r3 = *(4 + r3); // lwz @ 0x807697E8
    FUN_805E3728(); // bl 0x805E3728
    /* lfs f2, 0x98(r29) */ // 0x807697F0
    /* lfs f0, 0(r31) */ // 0x807697F4
    /* fmuls f0, f2, f0 */ // 0x807697F8
    /* fadds f0, f0, f1 */ // 0x807697FC
    /* lfs f1, 0x1c(r29) */ // 0x80769800
    /* stfs f0, 0x4c8(r28) */ // 0x80769804
    r3 = *(0 + r30); // lwz @ 0x80769808
    r3 = *(4 + r3); // lwz @ 0x8076980C
    FUN_805E3728(); // bl 0x805E3728
    /* lfs f0, 0x3c(r29) */ // 0x80769814
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80769818
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8076981C
    if (!=) goto 0x0x80769834;
    /* lfs f1, 0x4c8(r28) */ // 0x80769824
    /* lfs f0, 0xa0(r29) */ // 0x80769828
    /* fmuls f0, f1, f0 */ // 0x8076982C
    /* stfs f0, 0x4c8(r28) */ // 0x80769830
    /* lfs f0, 0x4a0(r28) */ // 0x80769834
    /* stfs f0, 0x14(r1) */ // 0x8076983C
    r5 = r28 + 0x474; // 0x80769844
    /* lfs f0, 0x4a4(r28) */ // 0x80769848
    /* stfs f0, 0x18(r1) */ // 0x8076984C
    /* lfs f0, 0x4a8(r28) */ // 0x80769850
    /* stfs f0, 0x1c(r1) */ // 0x80769854
    FUN_805A4498(r5); // bl 0x805A4498
    /* lfs f0, 8(r1) */ // 0x8076985C
    /* stfs f0, 0x4bc(r28) */ // 0x80769860
    /* lfs f0, 0xc(r1) */ // 0x80769864
    /* stfs f0, 0x4c0(r28) */ // 0x80769868
    /* lfs f0, 0x10(r1) */ // 0x8076986C
    /* stfs f0, 0x4c4(r28) */ // 0x80769870
    r31 = *(0x2c + r1); // lwz @ 0x80769874
    r30 = *(0x28 + r1); // lwz @ 0x80769878
    r29 = *(0x24 + r1); // lwz @ 0x8076987C
    r28 = *(0x20 + r1); // lwz @ 0x80769880
    r0 = *(0x34 + r1); // lwz @ 0x80769884
    return;
}