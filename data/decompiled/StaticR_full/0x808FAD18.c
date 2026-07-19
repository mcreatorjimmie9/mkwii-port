/* Function at 0x808FAD18, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808FAD18(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x808FAD2C
    r30 = r3;
    /* li r3, 0x7c */ // 0x808FAD34
    *(0x14 + r1) = r29; // stw @ 0x808FAD38
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x808FAD40
    r28 = r6;
    FUN_805E3430(r3); // bl 0x805E3430
}