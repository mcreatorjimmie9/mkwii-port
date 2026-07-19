/* Function at 0x808F55F4, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808F55F4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, -1 */ // 0x808F55FC
    /* li r0, 0 */ // 0x808F5604
    *(0xc + r1) = r31; // stw @ 0x808F5608
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808F5610
    r30 = r3;
    r6 = *(0xf8 + r3); // lwz @ 0x808F5618
    *(0x6d0 + r3) = r5; // stw @ 0x808F561C
    *(0xfc + r3) = r5; // stw @ 0x808F5624
    *(0x100 + r3) = r0; // stw @ 0x808F5628
    if (==) goto 0x0x808f5638;
    r3 = r6;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0x104 + r30); // lwz @ 0x808F5638
    if (==) goto 0x0x808f564c;
    r4 = r31;
    FUN_805E3430(r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x808F564C
    /* li r0, 0 */ // 0x808F5650
    /* lfs f0, 0(r3) */ // 0x808F5654
    /* li r3, -1 */ // 0x808F5658
    *(0x108 + r30) = r3; // stw @ 0x808F565C
    *(0x10c + r30) = r0; // stw @ 0x808F5660
    /* stfs f0, 0x110(r30) */ // 0x808F5664
    *(0x118 + r30) = r0; // stb @ 0x808F5668
    *(0x114 + r30) = r0; // stw @ 0x808F566C
    r31 = *(0xc + r1); // lwz @ 0x808F5670
    r30 = *(8 + r1); // lwz @ 0x808F5674
    r0 = *(0x14 + r1); // lwz @ 0x808F5678
    return;
}