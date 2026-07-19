/* Function at 0x80618330, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80618330(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8061833C
    *(0xc + r1) = r31; // stw @ 0x80618340
    r31 = r3;
    if (==) goto 0x0x80618358;
    if (<=) goto 0x0x80618358;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8061835C
    r0 = *(0x14 + r1); // lwz @ 0x80618360
    return;
}