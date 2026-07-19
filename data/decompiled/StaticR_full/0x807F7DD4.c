/* Function at 0x807F7DD4, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807F7DD4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x807F7DDC
    /* lis r31, 0 */ // 0x807F7DE8
    /* lfs f1, 0(r31) */ // 0x807F7DEC
    *(0x18 + r1) = r30; // stw @ 0x807F7DF0
    /* lis r30, 0 */ // 0x807F7DF4
    *(0x14 + r1) = r29; // stw @ 0x807F7DF8
    r29 = r3;
    r3 = *(8 + r3); // lwz @ 0x807F7E00
    /* lfs f2, 0(r30) */ // 0x807F7E04
    r3 = *(0x28 + r3); // lwz @ 0x807F7E08
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x807F7E10
    /* li r4, 1 */ // 0x807F7E14
    /* lfs f2, 0(r30) */ // 0x807F7E18
    /* lfs f1, 0(r31) */ // 0x807F7E1C
    r3 = *(0x28 + r3); // lwz @ 0x807F7E20
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x807F7E28
    /* li r4, 0 */ // 0x807F7E2C
    r3 = *(0x28 + r3); // lwz @ 0x807F7E30
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807F7E38
    r12 = *(8 + r12); // lwz @ 0x807F7E3C
    /* mtctr r12 */ // 0x807F7E40
    /* bctrl  */ // 0x807F7E44
    /* lfs f0, 0(r30) */ // 0x807F7E48
    /* li r0, 3 */ // 0x807F7E4C
    /* li r3, 0 */ // 0x807F7E50
    /* fdivs f0, f1, f0 */ // 0x807F7E54
    *(0xb0 + r29) = r0; // stw @ 0x807F7E58
    *(0xb4 + r29) = r3; // stw @ 0x807F7E5C
    /* fctiwz f0, f0 */ // 0x807F7E60
    /* stfd f0, 8(r1) */ // 0x807F7E64
    r0 = *(0xc + r1); // lwz @ 0x807F7E68
    *(0xc0 + r29) = r0; // stw @ 0x807F7E6C
    r31 = *(0x1c + r1); // lwz @ 0x807F7E70
    r30 = *(0x18 + r1); // lwz @ 0x807F7E74
    r29 = *(0x14 + r1); // lwz @ 0x807F7E78
    r0 = *(0x24 + r1); // lwz @ 0x807F7E7C
    return;
}