/* Function at 0x8081C5C8, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8081C5C8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8081C5DC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8081C5E4
    r29 = r3;
    r3 = r30;
    r4 = r29;
    FUN_8083F414(r3, r4); // bl 0x8083F414
    r3 = r31;
    r4 = r29 + 0xc; // 0x8081C5FC
    FUN_8083F078(r3, r4, r3, r4); // bl 0x8083F078
    r3 = r31;
    r4 = r31;
    FUN_805E3430(r3, r4, r3, r4); // bl 0x805E3430
}