/* Function at 0x805E1A38, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_805E1A38(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805E1A44
    FUN_8061F3F0(); // bl 0x8061F3F0
    FUN_805ABAFC(); // bl 0x805ABAFC
    /* li r4, 9 */ // 0x805E1A50
    r3 = r3 + 0xc94; // 0x805E1A54
    FUN_805E3430(r4, r3); // bl 0x805E3430
}