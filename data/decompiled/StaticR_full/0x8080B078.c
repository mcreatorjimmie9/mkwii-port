/* Function at 0x8080B078, size=104 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8080B078(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x54 + r1) = r29; // stw @ 0x8080B090
    r29 = r4;
    *(0x50 + r1) = r28; // stw @ 0x8080B098
    r28 = r3;
    FUN_80812BE4(); // bl 0x80812BE4
    /* lis r31, 0 */ // 0x8080B0A4
    /* lfs f1, 0(r31) */ // 0x8080B0A8
    FUN_805E3728(); // bl 0x805E3728
    /* lis r3, 0 */ // 0x8080B0B0
    /* lis r5, 0 */ // 0x8080B0B4
    /* lfs f2, 0(r3) */ // 0x8080B0B8
    /* lis r4, 0 */ // 0x8080B0BC
    /* lfs f3, 0(r31) */ // 0x8080B0C0
    /* lfs f0, 0(r5) */ // 0x8080B0C8
    r4 = r4 + 0; // 0x8080B0CC
    /* fmuls f2, f3, f2 */ // 0x8080B0D0
    /* fsubs f1, f1, f2 */ // 0x8080B0D4
    /* fmuls f1, f1, f0 */ // 0x8080B0D8
    FUN_805E3430(r4); // bl 0x805E3430
}