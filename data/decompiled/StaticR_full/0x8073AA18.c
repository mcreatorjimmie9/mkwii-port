/* Function at 0x8073AA18, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8073AA18(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8073AA24
    r31 = r3;
    FUN_8073AB1C(); // bl 0x8073AB1C
    r3 = *(0x248 + r31); // lwz @ 0x8073AA30
    r3 = r3 + 0x74; // 0x8073AA34
    FUN_805E3430(r3); // bl 0x805E3430
}