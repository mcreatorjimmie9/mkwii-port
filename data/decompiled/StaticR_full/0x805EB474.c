/* Function at 0x805EB474, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805EB474(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x805EB48C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805EB494
    r29 = r3;
    if (!=) goto 0x0x805eb4a8;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r5 = *(0xc94 + r3); // lwz @ 0x805EB4A4
    r4 = r5;
    r3 = r30;
    r5 = r31;
    /* li r6, 0 */ // 0x805EB4B4
    FUN_805E3430(r4, r3, r5, r6); // bl 0x805E3430
}