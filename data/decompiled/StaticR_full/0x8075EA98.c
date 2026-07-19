/* Function at 0x8075EA98, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8075EA98(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x8075EAA0
    /* lfs f1, 0(r5) */ // 0x8075EAA8
    *(0x1c + r1) = r31; // stw @ 0x8075EAAC
    /* lis r31, 0 */ // 0x8075EAB0
    /* lfs f2, 0(r31) */ // 0x8075EAB4
    *(0x18 + r1) = r30; // stw @ 0x8075EAB8
    *(0x14 + r1) = r29; // stw @ 0x8075EABC
    r29 = r3;
    r4 = *(0xd0 + r3); // lwz @ 0x8075EAC4
    r3 = *(8 + r4); // lwz @ 0x8075EAC8
    /* li r4, 0 */ // 0x8075EACC
    r3 = *(0x28 + r3); // lwz @ 0x8075EAD0
    FUN_805E70EC(r4); // bl 0x805E70EC
    r30 = *(0xd4 + r29); // lwz @ 0x8075EAD8
    /* li r4, 0 */ // 0x8075EADC
    r3 = *(8 + r30); // lwz @ 0x8075EAE0
    r3 = *(0x28 + r3); // lwz @ 0x8075EAE4
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8075EAEC
    r12 = *(0xc + r12); // lwz @ 0x8075EAF0
    /* mtctr r12 */ // 0x8075EAF4
    /* bctrl  */ // 0x8075EAF8
    r3 = *(8 + r30); // lwz @ 0x8075EAFC
    /* li r4, 0 */ // 0x8075EB00
    /* lfs f2, 0(r31) */ // 0x8075EB04
    r3 = *(0x28 + r3); // lwz @ 0x8075EB08
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0xdc + r29); // lwz @ 0x8075EB10
    FUN_805EEF04(r4); // bl 0x805EEF04
    r3 = *(0xdc + r29); // lwz @ 0x8075EB18
    /* li r4, 0 */ // 0x8075EB1C
    r3 = *(0x28 + r3); // lwz @ 0x8075EB20
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8075EB28
    r12 = *(8 + r12); // lwz @ 0x8075EB2C
    /* mtctr r12 */ // 0x8075EB30
    /* bctrl  */ // 0x8075EB34
    /* lis r3, 0 */ // 0x8075EB38
    /* li r4, 0 */ // 0x8075EB3C
    /* stfs f1, 0(r3) */ // 0x8075EB40
    r3 = *(0xdc + r29); // lwz @ 0x8075EB44
    r12 = *(0 + r3); // lwz @ 0x8075EB48
    r12 = *(0xc + r12); // lwz @ 0x8075EB4C
    /* mtctr r12 */ // 0x8075EB50
    /* bctrl  */ // 0x8075EB54
    r0 = *(0x24 + r1); // lwz @ 0x8075EB58
    r31 = *(0x1c + r1); // lwz @ 0x8075EB5C
    r30 = *(0x18 + r1); // lwz @ 0x8075EB60
    r29 = *(0x14 + r1); // lwz @ 0x8075EB64
    return;
}