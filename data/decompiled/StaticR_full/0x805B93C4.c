/* Function at 0x805B93C4, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B93C4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = r4;
    r4 = r5;
    *(0x14 + r1) = r0; // stw @ 0x805B93D4
    r5 = r6;
    r6 = r7;
    *(0xc + r1) = r31; // stw @ 0x805B93E0
    /* li r31, 0 */ // 0x805B93E4
    FUN_805E3430(r5, r6); // bl 0x805E3430
}