/* Function at 0x807658EC, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807658EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x807658F4
    *(0x14 + r1) = r0; // stw @ 0x807658F8
    *(0xc + r1) = r31; // stw @ 0x807658FC
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80765904
    r12 = *(0xf8 + r12); // lwz @ 0x80765908
    /* mtctr r12 */ // 0x8076590C
    /* bctrl  */ // 0x80765910
    r12 = *(0 + r31); // lwz @ 0x80765914
    r3 = r31;
    /* li r4, 1 */ // 0x8076591C
    r12 = *(0xec + r12); // lwz @ 0x80765920
    /* mtctr r12 */ // 0x80765924
    /* bctrl  */ // 0x80765928
    r12 = *(0 + r31); // lwz @ 0x8076592C
    /* lis r4, 0 */ // 0x80765930
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x80765938
    r12 = *(0xe0 + r12); // lwz @ 0x8076593C
    /* mtctr r12 */ // 0x80765940
    /* bctrl  */ // 0x80765944
    r0 = *(0x14 + r1); // lwz @ 0x80765948
    r31 = *(0xc + r1); // lwz @ 0x8076594C
    return;
}