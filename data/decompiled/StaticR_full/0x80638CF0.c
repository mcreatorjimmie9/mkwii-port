/* Function at 0x80638CF0, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_80638CF0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r3, 4 */ // 0x80638CF8
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x80638D0C
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x80638D14
    r28 = r4;
    FUN_805E3430(); // bl 0x805E3430
}