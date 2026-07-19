/* Function at 0x807FF69C, size=236 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807FF69C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x807FF6A4
    *(0x28 + r1) = r30; // stw @ 0x807FF6B0
    *(0x24 + r1) = r29; // stw @ 0x807FF6B4
    r29 = r3;
    r6 = *(0x104 + r3); // lwz @ 0x807FF6BC
    r4 = *(0x15c + r3); // lwz @ 0x807FF6C0
    r30 = *(0x10 + r6); // lwz @ 0x807FF6C4
    /* lfs f0, 0(r5) */ // 0x807FF6C8
    /* stfs f0, 0x10(r4) */ // 0x807FF6CC
    FUN_807FEC88(); // bl 0x807FEC88
    r3 = *(0xd8 + r29); // lwz @ 0x807FF6D4
    /* li r4, 1 */ // 0x807FF6D8
    r31 = *(0x14 + r29); // lwz @ 0x807FF6DC
    r12 = *(0 + r3); // lwz @ 0x807FF6E0
    r12 = *(0xc + r12); // lwz @ 0x807FF6E4
    /* mtctr r12 */ // 0x807FF6E8
    /* bctrl  */ // 0x807FF6EC
    r3 = *(0xfc + r29); // lwz @ 0x807FF6F0
    /* li r4, 1 */ // 0x807FF6F4
    r12 = *(0 + r3); // lwz @ 0x807FF6F8
    r12 = *(0xc + r12); // lwz @ 0x807FF6FC
    /* mtctr r12 */ // 0x807FF700
    /* bctrl  */ // 0x807FF704
    r3 = r29;
    r4 = r31;
    FUN_80800674(r3, r4); // bl 0x80800674
    FUN_805F4B58(r3, r4); // bl 0x805F4B58
    r3 = *(0xd8 + r29); // lwz @ 0x807FF718
    /* li r4, 0 */ // 0x807FF71C
    r12 = *(0 + r3); // lwz @ 0x807FF720
    r12 = *(0xc + r12); // lwz @ 0x807FF724
    /* mtctr r12 */ // 0x807FF728
    /* bctrl  */ // 0x807FF72C
    r3 = *(0xfc + r29); // lwz @ 0x807FF730
    /* li r4, 0 */ // 0x807FF734
    r12 = *(0 + r3); // lwz @ 0x807FF738
    r12 = *(0xc + r12); // lwz @ 0x807FF73C
    /* mtctr r12 */ // 0x807FF740
    /* bctrl  */ // 0x807FF744
    /* lis r3, 0 */ // 0x807FF748
    /* lis r0, 0x4330 */ // 0x807FF74C
    r3 = *(0 + r3); // lwz @ 0x807FF750
    /* lis r6, 0 */ // 0x807FF754
    *(0x10 + r1) = r0; // stw @ 0x807FF758
    r6 = r6 + 0; // 0x807FF75C
    /* mulli r0, r3, 0xc */ // 0x807FF760
    r3 = *(0x14 + r29); // lwz @ 0x807FF764
    /* li r4, 0 */ // 0x807FF768
    /* li r5, 0 */ // 0x807FF76C
    r7 = r6 + r0; // 0x807FF770
    /* li r6, 1 */ // 0x807FF774
    r0 = *(2 + r7); // lhz @ 0x807FF778
    /* li r7, -1 */ // 0x807FF77C
    *(0x14 + r1) = r0; // stw @ 0x807FF780
    FUN_805E3430(r6, r7); // bl 0x805E3430
}