/* Function at 0x80883DEC, size=168 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80883DEC(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x80883DF4
    /* lis r31, 0 */ // 0x80883E00
    r31 = r31 + 0; // 0x80883E04
    *(0x28 + r1) = r30; // stw @ 0x80883E08
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x80883E10
    r29 = r3;
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* lis r3, 0 */ // 0x80883E1C
    /* lfs f0, 4(r31) */ // 0x80883E20
    r3 = r3 + 0; // 0x80883E24
    *(0 + r29) = r3; // stw @ 0x80883E28
    /* lis r4, 0 */ // 0x80883E2C
    /* lfs f1, 0(r31) */ // 0x80883E30
    r4 = r4 + 0; // 0x80883E34
    /* stfs f0, 0xac(r29) */ // 0x80883E38
    /* lfs f0, 0x24(r31) */ // 0x80883E3C
    r3 = r29 + 0xc8; // 0x80883E40
    *(0 + r29) = r4; // stw @ 0x80883E44
    r5 = *(0 + r30); // lwz @ 0x80883E4C
    r5 = *(0x2c + r5); // lha @ 0x80883E50
    r0 = r5 + -1; // 0x80883E54
    /* cntlzw r0, r0 */ // 0x80883E58
    /* srwi r0, r0, 5 */ // 0x80883E5C
    *(0xb4 + r29) = r0; // stb @ 0x80883E60
    r5 = *(0 + r30); // lwz @ 0x80883E64
    r0 = *(0x2e + r5); // lha @ 0x80883E68
    /* mulli r0, r0, 0x3c */ // 0x80883E6C
    *(0xb8 + r29) = r0; // stw @ 0x80883E70
    r5 = *(0 + r30); // lwz @ 0x80883E74
    r0 = *(0x30 + r5); // lha @ 0x80883E78
    /* mulli r0, r0, 0x3c */ // 0x80883E7C
    *(0xbc + r29) = r0; // stw @ 0x80883E80
    /* stfs f1, 8(r1) */ // 0x80883E84
    /* stfs f0, 0xc(r1) */ // 0x80883E88
    /* stfs f1, 0x10(r1) */ // 0x80883E8C
    FUN_805E3430(); // bl 0x805E3430
}