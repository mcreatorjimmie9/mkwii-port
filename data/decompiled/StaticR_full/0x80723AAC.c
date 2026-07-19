/* Function at 0x80723AAC, size=32 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80723AAC(int r3)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x68 + r1) = r30; // stw @ 0x80723AC0
    r3 = *(0x118 + r3); // lwz @ 0x80723AC4
    FUN_8061DA88(); // bl 0x8061DA88
}