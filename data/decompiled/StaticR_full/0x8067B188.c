/* Function at 0x8067B188, size=252 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8067B188(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r8, 0x4330 */ // 0x8067B190
    /* lis r7, 0 */ // 0x8067B194
    *(0x34 + r1) = r0; // stw @ 0x8067B198
    /* slwi r0, r4, 1 */ // 0x8067B19C
    r0 = r5 + r0; // 0x8067B1A0
    /* lis r4, 0 */ // 0x8067B1A4
    *(0x2c + r1) = r31; // stw @ 0x8067B1A8
    /* addis r3, r3, 2 */ // 0x8067B1AC
    /* mulli r0, r0, 0xc0 */ // 0x8067B1B0
    /* lfs f0, 0(r7) */ // 0x8067B1B4
    *(0x28 + r1) = r30; // stw @ 0x8067B1B8
    r30 = r6;
    /* lfd f4, 0(r4) */ // 0x8067B1C0
    *(0x24 + r1) = r29; // stw @ 0x8067B1C4
    /* li r29, 1 */ // 0x8067B1C8
    r5 = *(-0x3980 + r3); // lwz @ 0x8067B1CC
    /* lis r3, 0 */ // 0x8067B1D0
    /* lfs f1, 0(r3) */ // 0x8067B1D4
    r3 = r6 + 0x20; // 0x8067B1D8
    r31 = r5 + r0; // 0x8067B1DC
    /* lwzx r0, r5, r0 */ // 0x8067B1E0
    *(0 + r6) = r0; // stw @ 0x8067B1E4
    r4 = r31 + 0x10; // 0x8067B1E8
    /* li r5, 0x4c */ // 0x8067B1EC
    r11 = *(4 + r31); // lhz @ 0x8067B1F0
    r10 = *(6 + r31); // lhz @ 0x8067B1F4
    /* mulli r0, r11, 0x3c */ // 0x8067B1F8
    r12 = *(8 + r31); // lhz @ 0x8067B1FC
    /* clrlwi r9, r10, 0x18 */ // 0x8067B200
    *(0x10 + r6) = r12; // sth @ 0x8067B204
    r0 = r9 + r0; // 0x8067B208
    *(0x12 + r6) = r29; // stb @ 0x8067B20C
    /* mulli r0, r0, 0x3e8 */ // 0x8067B210
    *(0xc + r6) = r11; // sth @ 0x8067B214
    *(0xe + r6) = r10; // stb @ 0x8067B218
    r9 = r12 + r0; // 0x8067B21C
    r10 = *(0xa + r31); // lhz @ 0x8067B220
    r11 = *(0xc + r31); // lhz @ 0x8067B224
    /* mulli r0, r10, 0x3c */ // 0x8067B228
    r12 = *(0xe + r31); // lhz @ 0x8067B22C
    /* clrlwi r7, r11, 0x18 */ // 0x8067B230
    *(8 + r1) = r8; // stw @ 0x8067B234
    r0 = r7 + r0; // 0x8067B238
    *(0xc + r1) = r9; // stw @ 0x8067B23C
    /* mulli r0, r0, 0x3e8 */ // 0x8067B240
    /* lfd f2, 8(r1) */ // 0x8067B244
    *(0x10 + r1) = r8; // stw @ 0x8067B248
    r0 = r12 + r0; // 0x8067B24C
    /* fsubs f3, f2, f4 */ // 0x8067B250
    *(0x14 + r1) = r0; // stw @ 0x8067B254
    /* lfd f2, 0x10(r1) */ // 0x8067B258
    *(0x1e + r6) = r29; // stb @ 0x8067B25C
    /* fsubs f2, f2, f4 */ // 0x8067B260
    *(0x18 + r6) = r10; // sth @ 0x8067B264
    /* fsubs f2, f3, f2 */ // 0x8067B268
    *(0x1a + r6) = r11; // stb @ 0x8067B26C
    *(0x1c + r6) = r12; // sth @ 0x8067B270
    /* fdivs f1, f2, f1 */ // 0x8067B274
    /* fmuls f0, f0, f1 */ // 0x8067B278
    /* stfs f0, 4(r6) */ // 0x8067B27C
    FUN_805E3430(); // bl 0x805E3430
}