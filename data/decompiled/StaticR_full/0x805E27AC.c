/* Function at 0x805E27AC, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805E27AC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805E27B8
    r31 = r3;
    FUN_805ABAFC(); // bl 0x805ABAFC
    /* li r4, 3 */ // 0x805E27C4
    r3 = r3 + 0xc94; // 0x805E27C8
    FUN_805E3430(r4, r3); // bl 0x805E3430
}