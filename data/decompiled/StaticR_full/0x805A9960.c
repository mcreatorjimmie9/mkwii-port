/* Function at 0x805A9960, size=60 bytes */
/* Stack frame: 480 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805A9960(int r3, int r4, int r5)
{
    /* Stack frame: -480(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805A9970
    r31 = r31 + 0; // 0x805A9974
    *(0x1d8 + r1) = r30; // stw @ 0x805A9978
    /* li r30, 0 */ // 0x805A997C
    *(0x1d4 + r1) = r29; // stw @ 0x805A9980
    r29 = r3;
    *(8 + r1) = r31; // stw @ 0x805A9988
    /* li r4, 0 */ // 0x805A9990
    /* li r5, 0x1c0 */ // 0x805A9994
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}