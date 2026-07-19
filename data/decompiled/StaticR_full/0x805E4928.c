/* Function at 0x805E4928, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805E4928(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x805E4934
    *(0xc + r1) = r31; // stw @ 0x805E4938
    r31 = r3;
    if (==) goto 0x0x805e4950;
    if (<=) goto 0x0x805e4950;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805E4954
    r0 = *(0x14 + r1); // lwz @ 0x805E4958
    return;
}