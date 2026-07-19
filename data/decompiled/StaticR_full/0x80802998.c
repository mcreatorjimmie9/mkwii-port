/* Function at 0x80802998, size=204 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80802998(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808029A8
    r31 = r31 + 0; // 0x808029AC
    *(0x38 + r1) = r30; // stw @ 0x808029B0
    /* lis r30, 0 */ // 0x808029B4
    r30 = r30 + 0; // 0x808029B8
    *(0x34 + r1) = r29; // stw @ 0x808029BC
    r29 = r3;
    r4 = *(0x108 + r3); // lbz @ 0x808029C4
    r0 = *(0x3c + r31); // lwz @ 0x808029C8
    r0 = r4 + r0; // 0x808029CC
    *(0x108 + r3) = r0; // stb @ 0x808029D0
    /* clrlwi r4, r0, 0x18 */ // 0x808029D4
    r0 = *(0x3c + r31); // lwz @ 0x808029D8
    /* subfic r0, r0, 0xff */ // 0x808029DC
    if (<=) goto 0x0x80802a20;
    /* lfs f0, 0(r30) */ // 0x808029E8
    /* li r4, 0xff */ // 0x808029EC
    /* li r0, 1 */ // 0x808029F0
    *(0x108 + r3) = r4; // stb @ 0x808029F4
    /* stfs f0, 0xf4(r3) */ // 0x808029F8
    *(0xb0 + r3) = r0; // stw @ 0x808029FC
    FUN_80812BE4(r4); // bl 0x80812BE4
    /* lfs f1, 0x48(r31) */ // 0x80802A04
    /* lfs f0, 0x44(r31) */ // 0x80802A08
    /* fsubs f1, f1, f0 */ // 0x80802A0C
    FUN_805E3728(); // bl 0x805E3728
    /* lfs f0, 0x44(r31) */ // 0x80802A14
    /* fadds f0, f0, f1 */ // 0x80802A18
    /* stfs f0, 0xf8(r29) */ // 0x80802A1C
    r3 = *(8 + r29); // lwz @ 0x80802A20
    /* li r4, 3 */ // 0x80802A24
    r5 = *(0x108 + r29); // lbz @ 0x80802A28
    FUN_805EF304(r4); // bl 0x805EF304
    /* lfs f2, 0xf0(r29) */ // 0x80802A30
    /* lfs f1, 0x38(r31) */ // 0x80802A34
    /* lfs f0, 0x34(r30) */ // 0x80802A38
    /* fadds f1, f2, f1 */ // 0x80802A3C
    /* stfs f1, 0xf0(r29) */ // 0x80802A40
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80802A44
    if (<=) goto 0x0x80802a54;
    /* lfs f0, 0(r30) */ // 0x80802A4C
    /* stfs f0, 0xf0(r29) */ // 0x80802A50
    /* lfs f1, 0xf0(r29) */ // 0x80802A54
    /* lfs f0, 0x38(r30) */ // 0x80802A58
    /* fmuls f1, f1, f0 */ // 0x80802A5C
    FUN_805E3430(); // bl 0x805E3430
}