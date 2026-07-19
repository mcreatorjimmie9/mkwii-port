/* Function at 0x808E0670, size=188 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808E0670(int r3, int r4)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x808E0680
    r31 = r31 + 0; // 0x808E0684
    *(0x58 + r1) = r30; // stw @ 0x808E0688
    *(0x54 + r1) = r29; // stw @ 0x808E068C
    *(0x50 + r1) = r28; // stw @ 0x808E0690
    r28 = r3;
    r4 = *(4 + r3); // lwz @ 0x808E0698
    r0 = *(4 + r4); // lwz @ 0x808E069C
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x808E06A0
    if (==) goto 0x0x808e07e8;
    r12 = *(0 + r4); // lwz @ 0x808E06A8
    r3 = r4;
    /* lfs f1, 0(r31) */ // 0x808E06B0
    r12 = *(0x18 + r12); // lwz @ 0x808E06B4
    /* mtctr r12 */ // 0x808E06B8
    /* bctrl  */ // 0x808E06BC
    /* lfs f2, 4(r31) */ // 0x808E06C0
    /* lfs f1, 8(r31) */ // 0x808E06C4
    /* lfs f0, 0xc(r31) */ // 0x808E06C8
    /* stfs f2, 0x1c(r28) */ // 0x808E06CC
    r29 = *(4 + r28); // lwz @ 0x808E06D0
    /* stfs f1, 0x20(r28) */ // 0x808E06D4
    /* stfs f0, 0x24(r28) */ // 0x808E06D8
    r3 = *(0x10 + r29); // lwz @ 0x808E06DC
    /* stfs f2, 8(r1) */ // 0x808E06E0
    r3 = *(0 + r3); // lwz @ 0x808E06E4
    /* stfs f1, 0xc(r1) */ // 0x808E06E8
    /* stfs f0, 0x10(r1) */ // 0x808E06F0
    if (==) goto 0x0x808e0708;
    r3 = r3 + 0xc; // 0x808E06F8
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x808e0710 */ // 0x808E0704
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f0, 0x1c(r28) */ // 0x808E0710
    /* li r30, 0 */ // 0x808E0714
    /* stfs f0, 0x24(r1) */ // 0x808E0718
    /* lfs f0, 0x20(r28) */ // 0x808E071C
    /* stfs f0, 0x34(r1) */ // 0x808E0720
    /* lfs f0, 0x24(r28) */ // 0x808E0724
    /* stfs f0, 0x44(r1) */ // 0x808E0728
}