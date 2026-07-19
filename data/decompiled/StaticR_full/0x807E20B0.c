/* Function at 0x807E20B0, size=156 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807E20B0(int r3, int r4)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x807E20B8
    /* lis r31, 0 */ // 0x807E20C4
    r31 = r31 + 0; // 0x807E20C8
    *(0x68 + r1) = r30; // stw @ 0x807E20CC
    r30 = r3;
    *(0x64 + r1) = r29; // stw @ 0x807E20D4
    /* lis r29, 0 */ // 0x807E20D8
    r29 = r29 + 0; // 0x807E20DC
    *(0x60 + r1) = r28; // stw @ 0x807E20E0
    r3 = *(0 + r4); // lwz @ 0x807E20E4
    FUN_805C25E8(); // bl 0x805C25E8
    r0 = *(0x48 + r29); // lwz @ 0x807E20EC
    if (>) goto 0x0x807e23a4;
    r4 = r30 + 0x30; // 0x807E20FC
    FUN_805A4400(r3, r4); // bl 0x805A4400
    /* lfs f3, 0(r31) */ // 0x807E2104
    /* lfs f1, 0x50(r1) */ // 0x807E2108
    /* fmuls f0, f3, f3 */ // 0x807E210C
    /* lfs f2, 0x58(r1) */ // 0x807E2110
    /* fmuls f1, f1, f1 */ // 0x807E2114
    /* stfs f3, 0x54(r1) */ // 0x807E2118
    /* fmuls f2, f2, f2 */ // 0x807E211C
    /* fadds f0, f1, f0 */ // 0x807E2120
    /* fadds f1, f2, f0 */ // 0x807E2124
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f2, 0x188(r30) */ // 0x807E212C
    /* lfs f0, 0x44(r29) */ // 0x807E2130
    /* fmuls f0, f2, f0 */ // 0x807E2134
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807E2138
    if (<=) goto 0x0x807e2264;
    /* lfs f1, 0x128(r30) */ // 0x807E2140
    /* lfs f0, 0xb0(r31) */ // 0x807E2144
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807E2148
}