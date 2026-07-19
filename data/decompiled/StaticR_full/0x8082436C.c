/* Function at 0x8082436C, size=32 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8082436C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80824380
    *(0x14 + r1) = r29; // stw @ 0x80824384
    FUN_805E3430(); // bl 0x805E3430
}