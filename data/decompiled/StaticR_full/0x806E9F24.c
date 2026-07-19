/* Function at 0x806E9F24, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E9F24(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806E9F2C
    *(0x14 + r1) = r0; // stw @ 0x806E9F30
    *(0xc + r1) = r31; // stw @ 0x806E9F34
    r31 = r3;
    r3 = *(0 + r3); // lwz @ 0x806E9F3C
    r5 = *(4 + r31); // lwz @ 0x806E9F40
    FUN_805E3430(); // bl 0x805E3430
}