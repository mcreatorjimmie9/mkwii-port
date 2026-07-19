/* Function at 0x8073D130, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_8073D130(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8073D138
    *(0x1c + r1) = r31; // stw @ 0x8073D140
    *(0x18 + r1) = r30; // stw @ 0x8073D144
    r30 = r3;
    r31 = *(0x724 + r3); // lwz @ 0x8073D14C
    if (<) goto 0x0x8073d170;
    /* lis r3, 0 */ // 0x8073D158
    r3 = r3 + 0; // 0x8073D15C
    r0 = *(4 + r3); // lwz @ 0x8073D160
    if (>=) goto 0x0x8073d170;
    /* li r4, 1 */ // 0x8073D16C
    if (!=) goto 0x0x8073d18c;
    /* lis r3, 0 */ // 0x8073D178
    r12 = *(0 + r3); // lwzu @ 0x8073D17C
    r12 = *(0x18 + r12); // lwz @ 0x8073D180
    /* mtctr r12 */ // 0x8073D184
    /* bctrl  */ // 0x8073D188
    /* lis r4, 0 */ // 0x8073D18C
    /* slwi r0, r31, 2 */ // 0x8073D190
    r4 = r4 + 0; // 0x8073D194
    r4 = *(8 + r4); // lwz @ 0x8073D19C
    /* lwzx r4, r4, r0 */ // 0x8073D1A0
    r4 = *(0x6c + r4); // lwz @ 0x8073D1A4
    r12 = *(0 + r4); // lwz @ 0x8073D1A8
    r12 = *(0x20 + r12); // lwz @ 0x8073D1AC
    /* mtctr r12 */ // 0x8073D1B0
    /* bctrl  */ // 0x8073D1B4
    /* lfs f0, 8(r1) */ // 0x8073D1B8
    /* stfs f0, 0x9c(r30) */ // 0x8073D1BC
    r3 = *(0x2d0 + r30); // lwz @ 0x8073D1C0
    /* lfs f0, 0xc(r1) */ // 0x8073D1C4
    /* stfs f0, 0xa0(r30) */ // 0x8073D1C8
    /* lfs f0, 0x10(r1) */ // 0x8073D1CC
    /* stfs f0, 0xa4(r30) */ // 0x8073D1D0
    r12 = *(0 + r3); // lwz @ 0x8073D1D4
    r12 = *(0x10 + r12); // lwz @ 0x8073D1D8
    /* mtctr r12 */ // 0x8073D1DC
    /* bctrl  */ // 0x8073D1E0
    r0 = *(0x24 + r1); // lwz @ 0x8073D1E4
    r31 = *(0x1c + r1); // lwz @ 0x8073D1E8
    r30 = *(0x18 + r1); // lwz @ 0x8073D1EC
    return;
}