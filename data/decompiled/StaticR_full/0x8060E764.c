/* Function at 0x8060E764, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8060E764(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8060E778
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060E780
    r4 = *(4 + r5); // lwz @ 0x8060E784
    r0 = *(0xc + r4); // lwz @ 0x8060E788
    r0 = r0 | 1; // 0x8060E78C
    *(0xc + r4) = r0; // stw @ 0x8060E790
    FUN_8061E010(); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8060E798
    /* lis r4, 0 */ // 0x8060E79C
    /* lfs f1, 0(r4) */ // 0x8060E7A0
    /* li r4, 0x1a4 */ // 0x8060E7A4
    r12 = *(0xe0 + r12); // lwz @ 0x8060E7A8
    /* mtctr r12 */ // 0x8060E7AC
    /* bctrl  */ // 0x8060E7B0
    *(0x192 + r30) = r31; // sth @ 0x8060E7B4
    r3 = *(0x260 + r30); // lwz @ 0x8060E7B8
    FUN_8064267C(); // bl 0x8064267C
    r0 = *(0x14 + r1); // lwz @ 0x8060E7C0
    r31 = *(0xc + r1); // lwz @ 0x8060E7C4
    r30 = *(8 + r1); // lwz @ 0x8060E7C8
    return;
}