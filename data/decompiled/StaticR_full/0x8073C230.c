/* Function at 0x8073C230, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8073C230(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8073C23C
    r31 = r3;
    r4 = *(0x254 + r3); // lwz @ 0x8073C244
    r3 = r4 + 0x74; // 0x8073C248
    FUN_805E3430(r3); // bl 0x805E3430
}