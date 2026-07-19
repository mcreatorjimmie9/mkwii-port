/* Function at 0x807FA818, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807FA818(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 1 */ // 0x807FA820
    *(0x18 + r1) = r30; // stw @ 0x807FA82C
    *(0x14 + r1) = r29; // stw @ 0x807FA830
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x807FA838
    r12 = *(0x68 + r12); // lwz @ 0x807FA83C
    /* mtctr r12 */ // 0x807FA840
    /* bctrl  */ // 0x807FA844
    r12 = *(0 + r29); // lwz @ 0x807FA848
    r3 = r29;
    r12 = *(0x30 + r12); // lwz @ 0x807FA850
    /* mtctr r12 */ // 0x807FA854
    /* bctrl  */ // 0x807FA858
    FUN_808179C0(r3); // bl 0x808179C0
    r12 = *(0 + r29); // lwz @ 0x807FA860
    r3 = r29;
    r12 = *(0x94 + r12); // lwz @ 0x807FA868
    /* mtctr r12 */ // 0x807FA86C
    /* bctrl  */ // 0x807FA870
    r3 = *(0xb0 + r29); // lwz @ 0x807FA874
    r12 = *(0 + r3); // lwz @ 0x807FA878
    r12 = *(0xf0 + r12); // lwz @ 0x807FA87C
    /* mtctr r12 */ // 0x807FA880
    /* bctrl  */ // 0x807FA884
    r31 = r29;
    /* li r30, 0 */ // 0x807FA88C
    r3 = *(0xb4 + r31); // lwz @ 0x807FA890
    r12 = *(0 + r3); // lwz @ 0x807FA894
    r12 = *(0xf0 + r12); // lwz @ 0x807FA898
    /* mtctr r12 */ // 0x807FA89C
    /* bctrl  */ // 0x807FA8A0
    r30 = r30 + 1; // 0x807FA8A4
    r31 = r31 + 4; // 0x807FA8A8
    if (<) goto 0x0x807fa890;
    r4 = *(8 + r29); // lwz @ 0x807FA8B4
    /* lis r3, 0 */ // 0x807FA8B8
    /* lis r5, 0 */ // 0x807FA8BC
    /* lfs f1, 0(r3) */ // 0x807FA8C0
    r3 = *(0x28 + r4); // lwz @ 0x807FA8C4
    /* li r4, 2 */ // 0x807FA8C8
    /* lfs f2, 0(r5) */ // 0x807FA8CC
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x807FA8D4
    /* li r4, 0 */ // 0x807FA8D8
    r3 = *(0x28 + r3); // lwz @ 0x807FA8DC
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807FA8E4
    r12 = *(8 + r12); // lwz @ 0x807FA8E8
    /* mtctr r12 */ // 0x807FA8EC
    /* bctrl  */ // 0x807FA8F0
    /* fctiwz f0, f1 */ // 0x807FA8F4
    /* li r0, 1 */ // 0x807FA8F8
    *(0x104 + r29) = r0; // stb @ 0x807FA8FC
    /* stfd f0, 8(r1) */ // 0x807FA900
    r0 = *(0xc + r1); // lwz @ 0x807FA904
    *(0xfc + r29) = r0; // stw @ 0x807FA908
    r31 = *(0x1c + r1); // lwz @ 0x807FA90C
    r30 = *(0x18 + r1); // lwz @ 0x807FA910
    r29 = *(0x14 + r1); // lwz @ 0x807FA914
    r0 = *(0x24 + r1); // lwz @ 0x807FA918
    return;
}