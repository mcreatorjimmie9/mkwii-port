/* Function at 0x80633780, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80633780(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80633790
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80633798
    r12 = *(0x14 + r12); // lwz @ 0x8063379C
    /* mtctr r12 */ // 0x806337A0
    /* bctrl  */ // 0x806337A4
    /* lis r4, 0 */ // 0x806337A8
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x806337B0
    r0 = *(0x25 + r3); // lbz @ 0x806337B4
    if (==) goto 0x0x806337d0;
    r3 = *(0x2c + r30); // lwz @ 0x806337C0
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x806337C8
    /* b 0x806337dc */ // 0x806337CC
    r3 = *(4 + r30); // lwz @ 0x806337D0
    r3 = *(0x8c + r3); // lwz @ 0x806337D4
    r0 = *(0x68 + r3); // lwz @ 0x806337D8
    r4 = *(0 + r31); // lwz @ 0x806337DC
    /* lis r3, 0 */ // 0x806337E0
    r3 = *(0 + r3); // lwz @ 0x806337E4
    /* clrlwi r5, r0, 0x18 */ // 0x806337E8
    r4 = *(3 + r4); // lbz @ 0x806337EC
    /* extsb r4, r4 */ // 0x806337F0
    FUN_80770F58(r3); // bl 0x80770F58
    *(0x48 + r30) = r3; // stw @ 0x806337F8
    /* lis r4, 0 */ // 0x806337FC
    /* lfs f1, 0(r4) */ // 0x80633800
    /* li r4, 0 */ // 0x80633804
    r12 = *(0 + r3); // lwz @ 0x80633808
    r12 = *(0x10 + r12); // lwz @ 0x8063380C
    /* mtctr r12 */ // 0x80633810
    /* bctrl  */ // 0x80633814
    r3 = *(0x48 + r30); // lwz @ 0x80633818
    /* lis r4, 0 */ // 0x8063381C
    /* lfs f1, 0(r4) */ // 0x80633820
    r12 = *(0 + r3); // lwz @ 0x80633824
    r12 = *(0x18 + r12); // lwz @ 0x80633828
    /* mtctr r12 */ // 0x8063382C
    /* bctrl  */ // 0x80633830
    r3 = *(0x48 + r30); // lwz @ 0x80633834
    /* li r0, 1 */ // 0x80633838
    *(0x16 + r3) = r0; // stb @ 0x8063383C
    r31 = *(0xc + r1); // lwz @ 0x80633840
    r30 = *(8 + r1); // lwz @ 0x80633844
    r0 = *(0x14 + r1); // lwz @ 0x80633848
    return;
}