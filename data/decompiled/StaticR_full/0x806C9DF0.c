/* Function at 0x806C9DF0, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806C9DF0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* li r5, 0x800 */ // 0x806C9DF8
    *(0x24 + r1) = r0; // stw @ 0x806C9DFC
    /* stmw r26, 8(r1) */ // 0x806C9E00
    r26 = r3;
    r27 = r4;
    /* li r4, 0 */ // 0x806C9E0C
    r3 = r3 + 0x38; // 0x806C9E10
    FUN_805E3430(r4, r3); // bl 0x805E3430
}