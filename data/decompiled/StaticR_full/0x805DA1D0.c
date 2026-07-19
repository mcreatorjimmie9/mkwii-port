/* Function at 0x805DA1D0, size=268 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805DA1D0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x805DA1E4
    *(0x34 + r1) = r29; // stw @ 0x805DA1E8
    r4 = *(0x24 + r3); // lha @ 0x805DA1EC
    if (>=) goto 0x0x805da200;
    r0 = r4 + 2; // 0x805DA1F8
    *(0x24 + r3) = r0; // sth @ 0x805DA1FC
    r0 = *(0x24 + r3); // lha @ 0x805DA200
    if (<=) goto 0x0x805da214;
    /* li r0, 0x28 */ // 0x805DA20C
    *(0x24 + r3) = r0; // sth @ 0x805DA210
    r3 = *(0x20 + r3); // lwz @ 0x805DA214
    r4 = *(0x30 + r31); // lwz @ 0x805DA21C
    r6 = *(0x34 + r31); // lwz @ 0x805DA220
    FUN_805DB7A8(r5); // bl 0x805DB7A8
    /* clrlwi. r29, r3, 0x18 */ // 0x805DA228
    *(0xa0 + r31) = r3; // stb @ 0x805DA22C
    if (==) goto 0x0x805da298;
    /* lis r3, 0 */ // 0x805DA234
    /* lfs f1, 0x10(r1) */ // 0x805DA238
    /* lfs f0, 0(r3) */ // 0x805DA23C
    /* li r30, 0 */ // 0x805DA240
    /* fmuls f1, f0, f1 */ // 0x805DA244
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0x100 */ // 0x805DA24C
    r0 = r4 + -0x20; // 0x805DA250
    if (<) goto 0x0x805da264;
    /* li r30, 1 */ // 0x805DA25C
    /* b 0x805da28c */ // 0x805DA260
    r4 = *(0x98 + r31); // lwz @ 0x805DA264
    r0 = *(0xd + r4); // lbz @ 0x805DA268
    if (==) goto 0x0x805da28c;
    r0 = *(0x9c + r31); // lwz @ 0x805DA274
    r4 = *(0x14 + r4); // lwz @ 0x805DA278
    /* subf r0, r0, r3 */ // 0x805DA27C
    if (>=) goto 0x0x805da28c;
    /* li r30, 1 */ // 0x805DA288
    if (==) goto 0x0x805da298;
    /* li r29, 0 */ // 0x805DA294
    if (==) goto 0x0x805da304;
    /* lfs f1, 0xc(r1) */ // 0x805DA2A0
    /* li r0, 1 */ // 0x805DA2A4
    /* lfs f0, 8(r1) */ // 0x805DA2A8
    /* stfs f0, 0x28(r31) */ // 0x805DA2AC
    r3 = *(0x98 + r31); // lwz @ 0x805DA2B0
    /* stfs f1, 0x2c(r31) */ // 0x805DA2B4
    *(0xc + r3) = r0; // stb @ 0x805DA2B8
    /* lfs f0, 8(r1) */ // 0x805DA2BC
    /* lfs f2, 0xc(r1) */ // 0x805DA2C0
    /* fctiwz f1, f0 */ // 0x805DA2C4
    r4 = *(0x98 + r31); // lwz @ 0x805DA2C8
    /* fctiwz f0, f2 */ // 0x805DA2CC
    /* stfd f1, 0x18(r1) */ // 0x805DA2D0
    r6 = *(0x1c + r1); // lwz @ 0x805DA2D4
    /* stfd f0, 0x20(r1) */ // 0x805DA2D8
}