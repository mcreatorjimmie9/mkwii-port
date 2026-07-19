/* Function at 0x805F6544, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F6544(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r0, 0x4330 */ // 0x805F6550
    *(0x1c + r1) = r31; // stw @ 0x805F6554
    r31 = r3;
    /* li r3, 1 */ // 0x805F655C
    *(8 + r1) = r0; // stw @ 0x805F6560
    *(0x10 + r1) = r0; // stw @ 0x805F6564
    FUN_805E3430(r3); // bl 0x805E3430
}