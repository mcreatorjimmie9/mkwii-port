/* Function at 0x807A8CBC, size=32 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807A8CBC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x807A8CD0
    r30 = r3;
    FUN_805E3430(); // bl 0x805E3430
}