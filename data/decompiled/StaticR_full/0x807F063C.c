/* Function at 0x807F063C, size=208 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_807F063C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 0 */ // 0x807F0644
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x807F0654
    *(0x24 + r1) = r29; // stw @ 0x807F0658
    *(0x20 + r1) = r28; // stw @ 0x807F065C
    /* lis r28, 0 */ // 0x807F0660
    /* lfs f1, 0(r28) */ // 0x807F0664
    r3 = *(0x20 + r3); // lwz @ 0x807F0668
    r12 = *(0 + r3); // lwz @ 0x807F066C
    r12 = *(0x10 + r12); // lwz @ 0x807F0670
    /* mtctr r12 */ // 0x807F0674
    /* bctrl  */ // 0x807F0678
    r4 = *(0xa0 + r31); // lwz @ 0x807F067C
    /* lis r30, 0x4330 */ // 0x807F0680
    r3 = *(0x20 + r31); // lwz @ 0x807F0684
    /* lis r29, 0 */ // 0x807F0688
    r4 = *(0 + r4); // lwz @ 0x807F068C
    r12 = *(0 + r3); // lwz @ 0x807F0690
    r0 = *(0x2e + r4); // lha @ 0x807F0694
    *(0x18 + r1) = r30; // stw @ 0x807F0698
    /* xoris r0, r0, 0x8000 */ // 0x807F069C
    /* lfd f1, 0(r29) */ // 0x807F06A0
    *(0x1c + r1) = r0; // stw @ 0x807F06A4
    r12 = *(0x18 + r12); // lwz @ 0x807F06A8
    /* lfd f0, 0x18(r1) */ // 0x807F06AC
    /* fsubs f1, f0, f1 */ // 0x807F06B0
    /* mtctr r12 */ // 0x807F06B4
    /* bctrl  */ // 0x807F06B8
    r3 = *(0x20 + r31); // lwz @ 0x807F06BC
    r12 = *(0 + r3); // lwz @ 0x807F06C0
    r12 = *(0x14 + r12); // lwz @ 0x807F06C4
    /* mtctr r12 */ // 0x807F06C8
    /* bctrl  */ // 0x807F06CC
    r5 = *(0x20 + r31); // lwz @ 0x807F06D0
    r0 = *(0x2c + r31); // lhz @ 0x807F06D8
    /* lfs f0, 0x1c(r5) */ // 0x807F06DC
    r0 = r0 | 1; // 0x807F06E0
    /* stfs f0, 0xb4(r31) */ // 0x807F06E4
    *(0x2c + r31) = r0; // sth @ 0x807F06E8
    /* stfs f0, 0x34(r31) */ // 0x807F06EC
    r4 = *(0x24 + r5); // lwz @ 0x807F06F0
    r0 = *(0x28 + r5); // lwz @ 0x807F06F4
    *(0xc + r1) = r0; // stw @ 0x807F06F8
    *(8 + r1) = r4; // stw @ 0x807F06FC
    r0 = *(0x2c + r5); // lwz @ 0x807F0700
    *(0x10 + r1) = r0; // stw @ 0x807F0704
    FUN_805E3430(); // bl 0x805E3430
}