/* Function at 0x8078D218, size=36 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078D218(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x8078D220
    *(0x24 + r1) = r0; // stw @ 0x8078D224
    *(0x1c + r1) = r31; // stw @ 0x8078D22C
    r31 = r3;
    r3 = r3 + 0x60; // 0x8078D234
    FUN_805E3430(r4, r3); // bl 0x805E3430
}