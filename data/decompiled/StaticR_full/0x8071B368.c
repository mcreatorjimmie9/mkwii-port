/* Function at 0x8071B368, size=88 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8071B368(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r4 = r6;
    r31 = r7;
    *(0x28 + r1) = r30; // stw @ 0x8071B380
    r30 = r5;
    *(0x24 + r1) = r29; // stw @ 0x8071B388
    r29 = r3;
    FUN_805A4498(r3); // bl 0x805A4498
    r4 = r31;
    r5 = r30;
    FUN_805A4498(r3, r4, r5, r3); // bl 0x805A4498
    r3 = r29;
    FUN_805C6D88(r3, r3, r4, r5); // bl 0x805C6D88
    r3 = r29;
    FUN_805E3430(r3, r4, r5, r3); // bl 0x805E3430
}