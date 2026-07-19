/* Function at 0x80806420, size=52 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80806420(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x8080642C
    r31 = r3;
    r4 = r31;
    FUN_80806074(r3, r4); // bl 0x80806074
    /* lis r4, 0 */ // 0x80806440
    /* lfs f0, 0(r4) */ // 0x80806448
    /* stfs f0, 0x30(r1) */ // 0x8080644C
    FUN_805E3430(r4, r3); // bl 0x805E3430
}