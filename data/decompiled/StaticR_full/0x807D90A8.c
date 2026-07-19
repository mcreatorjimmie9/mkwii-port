/* Function at 0x807D90A8, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807D90A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D90B4
    r31 = r3;
    FUN_807D6D98(); // bl 0x807D6D98
    r3 = r31;
    r4 = r31 + 0x64; // 0x807D90C4
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807D90CC
    r31 = *(0xc + r1); // lwz @ 0x807D90D0
    return;
}