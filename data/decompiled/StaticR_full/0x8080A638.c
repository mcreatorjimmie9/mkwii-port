/* Function at 0x8080A638, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8080A638(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8080A648
    r31 = r31 + 0; // 0x8080A64C
    *(0x18 + r1) = r30; // stw @ 0x8080A650
    r30 = r3;
    FUN_8089F7B0(); // bl 0x8089F7B0
    /* li r3, 0x6c */ // 0x8080A65C
    FUN_805E3430(r3); // bl 0x805E3430
}