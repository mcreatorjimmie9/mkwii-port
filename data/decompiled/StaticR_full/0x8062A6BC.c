/* Function at 0x8062A6BC, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8062A6BC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8062A6C8
    r31 = r3;
    r5 = *(4 + r3); // lwz @ 0x8062A6D0
    r3 = r3 + 0x9c; // 0x8062A6D4
    r4 = r5 + 0x100; // 0x8062A6D8
    r5 = r5 + 0x68; // 0x8062A6DC
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}