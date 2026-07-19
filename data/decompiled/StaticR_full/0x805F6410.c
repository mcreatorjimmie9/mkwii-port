/* Function at 0x805F6410, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F6410(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r0, 0x4330 */ // 0x805F641C
    *(0x1c + r1) = r31; // stw @ 0x805F6420
    r31 = r3;
    /* li r3, 0 */ // 0x805F6428
    *(8 + r1) = r0; // stw @ 0x805F642C
    *(0x10 + r1) = r0; // stw @ 0x805F6430
    FUN_805E3430(r3); // bl 0x805E3430
}