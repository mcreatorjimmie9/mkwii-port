/* Function at 0x8073ACEC, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8073ACEC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8073ACF8
    r31 = r3;
    r4 = *(0x248 + r3); // lwz @ 0x8073AD00
    r3 = r4 + 0x74; // 0x8073AD04
    FUN_805E3430(r3); // bl 0x805E3430
}