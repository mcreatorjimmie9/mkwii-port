/* Function at 0x80756150, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80756150(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80756158
    *(0x14 + r1) = r0; // stw @ 0x8075615C
    *(0xc + r1) = r31; // stw @ 0x80756160
    r31 = r3;
    r3 = *(8 + r3); // lwz @ 0x80756168
    r12 = *(0 + r3); // lwz @ 0x8075616C
    r12 = *(0xc + r12); // lwz @ 0x80756170
    /* mtctr r12 */ // 0x80756174
    /* bctrl  */ // 0x80756178
    r3 = *(0xe4 + r31); // lwz @ 0x8075617C
    /* li r4, 1 */ // 0x80756180
    r12 = *(0 + r3); // lwz @ 0x80756184
    r12 = *(0xc + r12); // lwz @ 0x80756188
    /* mtctr r12 */ // 0x8075618C
    /* bctrl  */ // 0x80756190
    r4 = *(0xe4 + r31); // lwz @ 0x80756194
    /* lis r3, 0 */ // 0x80756198
    /* lis r5, 0 */ // 0x8075619C
    /* lfs f1, 0(r3) */ // 0x807561A0
    r3 = *(0x28 + r4); // lwz @ 0x807561A4
    /* li r4, 3 */ // 0x807561A8
    /* lfs f2, 0(r5) */ // 0x807561AC
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    /* li r0, 1 */ // 0x807561B4
    *(0x100 + r31) = r0; // stb @ 0x807561B8
    r31 = *(0xc + r1); // lwz @ 0x807561BC
    r0 = *(0x14 + r1); // lwz @ 0x807561C0
    return;
}