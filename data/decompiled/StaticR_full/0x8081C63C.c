/* Function at 0x8081C63C, size=72 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8081C63C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x8081C650
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x8081C658
    r29 = r3;
    r3 = r30;
    r4 = r29;
    FUN_8083F414(r3, r4); // bl 0x8083F414
    r4 = r29 + 0xc; // 0x8081C670
    FUN_8083F078(r3, r4, r3, r4); // bl 0x8083F078
    r4 = r3;
    FUN_805E3430(r3, r4, r3, r4); // bl 0x805E3430
}