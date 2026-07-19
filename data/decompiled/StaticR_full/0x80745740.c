/* Function at 0x80745740, size=36 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80745740(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80745748
    *(0x94 + r1) = r0; // stw @ 0x8074574C
    *(0x8c + r1) = r31; // stw @ 0x80745750
    r31 = r4;
    r4 = r3;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}