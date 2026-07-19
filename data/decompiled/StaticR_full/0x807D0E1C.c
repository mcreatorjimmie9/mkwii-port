/* Function at 0x807D0E1C, size=196 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807D0E1C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807D0E2C
    r31 = r31 + 0; // 0x807D0E30
    *(0x48 + r1) = r30; // stw @ 0x807D0E34
    r30 = r6;
    *(0x44 + r1) = r29; // stw @ 0x807D0E3C
    r29 = r5;
    *(0x40 + r1) = r28; // stw @ 0x807D0E44
    r28 = r4;
    r0 = *(0x1c + r31); // lbz @ 0x807D0E4C
    /* extsb. r0, r0 */ // 0x807D0E50
    if (!=) goto 0x0x807d0e90;
    /* lis r5, 0 */ // 0x807D0E58
    /* lis r4, 0 */ // 0x807D0E5C
    /* lfs f1, 0(r5) */ // 0x807D0E60
    r3 = r31 + 0x2c; // 0x807D0E64
    /* lfs f0, 0(r4) */ // 0x807D0E68
    /* lis r4, 0 */ // 0x807D0E6C
    /* stfs f1, 0x2c(r31) */ // 0x807D0E70
    r4 = r4 + 0; // 0x807D0E74
    r5 = r31 + 0x20; // 0x807D0E78
    /* stfs f0, 4(r3) */ // 0x807D0E7C
    /* stfs f1, 8(r3) */ // 0x807D0E80
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    /* li r0, 1 */ // 0x807D0E88
    *(0x1c + r31) = r0; // stb @ 0x807D0E8C
    r4 = r29;
    r5 = r28;
    FUN_805A4498(r4, r5, r3); // bl 0x805A4498
    r4 = r30;
    r5 = r29;
    FUN_805A4498(r3, r4, r5, r3); // bl 0x805A4498
    r5 = r31 + 0x2c; // 0x807D0EB8
    FUN_805C6D88(r3, r3, r4, r5); // bl 0x805C6D88
    /* lfs f2, 8(r1) */ // 0x807D0EC0
    /* lfs f1, 0xc(r1) */ // 0x807D0EC8
    /* lfs f0, 0x10(r1) */ // 0x807D0ECC
    /* stfs f2, 0x14(r1) */ // 0x807D0ED0
    /* stfs f1, 0x18(r1) */ // 0x807D0ED4
    /* stfs f0, 0x1c(r1) */ // 0x807D0ED8
    FUN_805E3430(); // bl 0x805E3430
}