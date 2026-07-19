/* Function at 0x8074581C, size=48 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8074581C(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    r0 = r3;
    *(0x8c + r1) = r31; // stw @ 0x80745830
    r31 = r5;
    /* li r5, 0 */ // 0x80745838
    *(0x88 + r1) = r30; // stw @ 0x8074583C
    r30 = r4;
    r4 = r0;
    FUN_805E3430(r5, r4); // bl 0x805E3430
}