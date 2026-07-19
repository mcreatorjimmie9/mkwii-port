/* Function at 0x807FCC2C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FCC2C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807FCC38
    r31 = r3;
    /* li r3, 0x7c */ // 0x807FCC40
    FUN_805E3430(r3); // bl 0x805E3430
}