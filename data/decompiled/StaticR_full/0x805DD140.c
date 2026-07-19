/* Function at 0x805DD140, size=184 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_805DD140(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805DD150
    /* lfs f0, 0(r31) */ // 0x805DD154
    *(0x28 + r1) = r30; // stw @ 0x805DD158
    /* slwi r30, r4, 2 */ // 0x805DD15C
    *(0x24 + r1) = r29; // stw @ 0x805DD160
    r29 = r3;
    r5 = *(4 + r3); // lwz @ 0x805DD168
    /* lwzx r4, r5, r30 */ // 0x805DD16C
    /* lfs f1, 0x24(r4) */ // 0x805DD170
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805DD174
    if (<=) goto 0x0x805dd25c;
    FUN_805DD290(); // bl 0x805DD290
    /* lis r3, 0 */ // 0x805DD180
    r5 = *(4 + r29); // lwz @ 0x805DD184
    r3 = *(0 + r3); // lwz @ 0x805DD188
    /* li r4, 1 */ // 0x805DD18C
    /* lwzx r30, r5, r30 */ // 0x805DD190
    r3 = *(0x10 + r3); // lwz @ 0x805DD194
    FUN_805F59D8(r4); // bl 0x805F59D8
    /* lfs f0, 0x24(r30) */ // 0x805DD19C
    r7 = *(0x20 + r30); // lbz @ 0x805DD1A4
    /* li r3, 4 */ // 0x805DD1A8
    /* fctiwz f0, f0 */ // 0x805DD1AC
    r6 = *(0x21 + r30); // lbz @ 0x805DD1B0
    r5 = *(0x22 + r30); // lbz @ 0x805DD1B4
    /* stfd f0, 0x10(r1) */ // 0x805DD1B8
    r0 = *(0x14 + r1); // lwz @ 0x805DD1BC
    *(0xc + r1) = r7; // stb @ 0x805DD1C0
    *(0xd + r1) = r6; // stb @ 0x805DD1C4
    *(0xe + r1) = r5; // stb @ 0x805DD1C8
    *(0xf + r1) = r0; // stb @ 0x805DD1CC
    r0 = *(0xc + r1); // lwz @ 0x805DD1D0
    *(8 + r1) = r0; // stw @ 0x805DD1D4
    FUN_805E3430(); // bl 0x805E3430
    /* li r3, 0x80 */ // 0x805DD1DC
    /* li r4, 0 */ // 0x805DD1E0
    /* li r5, 4 */ // 0x805DD1E4
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* lis r5, -0x33ff */ // 0x805DD1EC
    /* lfs f0, 0(r31) */ // 0x805DD1F0
    /* stfs f0, -0x8000(r5) */ // 0x805DD1F4
}