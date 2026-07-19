/* Function at 0x8086E378, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8086E378(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8086E388
    r31 = r31 + 0; // 0x8086E38C
    *(8 + r1) = r30; // stw @ 0x8086E390
    r30 = r3;
    *(8 + r3) = r4; // stw @ 0x8086E398
    r4 = *(4 + r3); // lwz @ 0x8086E39C
    *(0xc + r3) = r5; // stb @ 0x8086E3A0
    r3 = *(0 + r3); // lwz @ 0x8086E3A4
    FUN_805ECA00(); // bl 0x805ECA00
    r3 = *(0 + r30); // lwz @ 0x8086E3AC
    /* li r4, 2 */ // 0x8086E3B0
    /* lfs f1, 0(r31) */ // 0x8086E3B4
    r3 = *(0x28 + r3); // lwz @ 0x8086E3B8
    /* lfs f2, 4(r31) */ // 0x8086E3BC
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0 + r30); // lwz @ 0x8086E3C4
    /* li r4, 1 */ // 0x8086E3C8
    /* lfs f1, 0(r31) */ // 0x8086E3CC
    r3 = *(0x28 + r3); // lwz @ 0x8086E3D0
    /* lfs f2, 4(r31) */ // 0x8086E3D4
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0 + r30); // lwz @ 0x8086E3DC
    /* li r4, 2 */ // 0x8086E3E0
    r3 = *(0x28 + r3); // lwz @ 0x8086E3E4
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8086E3EC
    /* lfs f1, 0x2c(r31) */ // 0x8086E3F0
    r12 = *(0x1c + r12); // lwz @ 0x8086E3F4
    /* mtctr r12 */ // 0x8086E3F8
    /* bctrl  */ // 0x8086E3FC
    r0 = *(0x14 + r1); // lwz @ 0x8086E400
    r31 = *(0xc + r1); // lwz @ 0x8086E404
    r30 = *(8 + r1); // lwz @ 0x8086E408
    return;
}