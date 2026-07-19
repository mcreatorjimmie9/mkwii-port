/* Function at 0x8073D68C, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_8073D68C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8073D694
    *(0x1c + r1) = r31; // stw @ 0x8073D69C
    *(0x18 + r1) = r30; // stw @ 0x8073D6A0
    r30 = r3;
    r31 = *(0x724 + r3); // lwz @ 0x8073D6A8
    if (<) goto 0x0x8073d6cc;
    /* lis r3, 0 */ // 0x8073D6B4
    r3 = r3 + 0; // 0x8073D6B8
    r0 = *(4 + r3); // lwz @ 0x8073D6BC
    if (>=) goto 0x0x8073d6cc;
    /* li r4, 1 */ // 0x8073D6C8
    if (!=) goto 0x0x8073d6e8;
    /* lis r3, 0 */ // 0x8073D6D4
    r12 = *(0 + r3); // lwzu @ 0x8073D6D8
    r12 = *(0x18 + r12); // lwz @ 0x8073D6DC
    /* mtctr r12 */ // 0x8073D6E0
    /* bctrl  */ // 0x8073D6E4
    /* lis r4, 0 */ // 0x8073D6E8
    /* slwi r0, r31, 2 */ // 0x8073D6EC
    r4 = r4 + 0; // 0x8073D6F0
    r4 = *(8 + r4); // lwz @ 0x8073D6F8
    /* lwzx r4, r4, r0 */ // 0x8073D6FC
    r4 = *(0x6c + r4); // lwz @ 0x8073D700
    r12 = *(0 + r4); // lwz @ 0x8073D704
    r12 = *(0x20 + r12); // lwz @ 0x8073D708
    /* mtctr r12 */ // 0x8073D70C
    /* bctrl  */ // 0x8073D710
    /* lfs f0, 8(r1) */ // 0x8073D714
    /* stfs f0, 0x9c(r30) */ // 0x8073D718
    r3 = *(0x2d4 + r30); // lwz @ 0x8073D71C
    /* lfs f0, 0xc(r1) */ // 0x8073D720
    /* stfs f0, 0xa0(r30) */ // 0x8073D724
    /* lfs f0, 0x10(r1) */ // 0x8073D728
    /* stfs f0, 0xa4(r30) */ // 0x8073D72C
    r12 = *(0 + r3); // lwz @ 0x8073D730
    r12 = *(0x10 + r12); // lwz @ 0x8073D734
    /* mtctr r12 */ // 0x8073D738
    /* bctrl  */ // 0x8073D73C
    r0 = *(0x24 + r1); // lwz @ 0x8073D740
    r31 = *(0x1c + r1); // lwz @ 0x8073D744
    r30 = *(0x18 + r1); // lwz @ 0x8073D748
    return;
}