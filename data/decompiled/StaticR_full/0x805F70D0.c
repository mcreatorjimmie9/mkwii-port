/* Function at 0x805F70D0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F70D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805F70DC
    r31 = r3;
    r0 = *(0x1c + r3); // lwz @ 0x805F70E4
    if (==) goto 0x0x805f7200;
    r3 = r3 + 0x98; // 0x805F70F0
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805f7200;
    r4 = *(0xc4 + r31); // lwz @ 0x805F7100
    r3 = r31;
}