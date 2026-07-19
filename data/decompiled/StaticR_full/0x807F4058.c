/* Function at 0x807F4058, size=28 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F4058(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x807F4064
    r31 = r3;
    r3 = *(0xb8 + r3); // lwz @ 0x807F406C
    FUN_8061DA88(); // bl 0x8061DA88
}