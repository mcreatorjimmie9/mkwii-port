/* Function at 0x8063A524, size=60 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8063A524(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x8063A538
    r30 = r5;
    /* li r5, 0 */ // 0x8063A540
    *(0x14 + r1) = r29; // stw @ 0x8063A544
    r29 = r4;
    /* li r4, 1 */ // 0x8063A54C
    *(0x10 + r1) = r28; // stw @ 0x8063A550
    r28 = r3;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}