/* Function at 0x80883EB4, size=100 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80883EB4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r0, 0x4330 */ // 0x80883EC0
    r31 = r7;
    *(0x68 + r1) = r30; // stw @ 0x80883ECC
    r30 = r4;
    r4 = r6;
    *(0x64 + r1) = r29; // stw @ 0x80883ED8
    r29 = r3;
    *(0x60 + r1) = r28; // stw @ 0x80883EE4
    r28 = r5;
    r5 = r30 + 0x30; // 0x80883EEC
    *(0x38 + r1) = r0; // stw @ 0x80883EF0
    *(0x40 + r1) = r0; // stw @ 0x80883EF4
    FUN_805A4498(r5); // bl 0x805A4498
    /* lis r4, 0 */ // 0x80883EFC
    r3 = r30 + 0xc8; // 0x80883F00
    /* lfs f0, 0(r4) */ // 0x80883F04
    /* stfs f0, 0x24(r1) */ // 0x80883F0C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}