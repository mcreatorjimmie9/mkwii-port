/* Function at 0x807A8C50, size=32 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807A8C50(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x28 + r1) = r30; // stw @ 0x807A8C64
    r30 = r3;
    FUN_805E3430(); // bl 0x805E3430
}