/* Function at 0x80648D30, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80648D30(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80648D3C
    r31 = r3;
    FUN_805EB22C(); // bl 0x805EB22C
    r3 = r31 + 0x4c; // 0x80648D48
    FUN_805E3430(r3); // bl 0x805E3430
}