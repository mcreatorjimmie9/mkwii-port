/* Function at 0x8080EE20, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080EE20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8080EE2C
    r31 = r3;
    *(4 + r3) = r4; // stw @ 0x8080EE34
    /* slwi r3, r4, 2 */ // 0x8080EE38
    FUN_805E3430(); // bl 0x805E3430
}