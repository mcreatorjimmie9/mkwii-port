/* Function at 0x807BF13C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807BF13C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BF148
    r31 = r3;
    r3 = r3 + 0x20; // 0x807BF150
    FUN_805E3430(r3); // bl 0x805E3430
}