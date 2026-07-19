/* Function at 0x80742F14, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80742F14(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80742F28
    r30 = r3;
    r5 = *(0x2a0 + r3); // lwz @ 0x80742F30
    r3 = r5 + 0x74; // 0x80742F34
    FUN_805E3430(r3); // bl 0x805E3430
}