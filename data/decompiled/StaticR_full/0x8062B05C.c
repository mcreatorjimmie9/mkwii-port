/* Function at 0x8062B05C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8062B05C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8062B068
    *(0xc + r1) = r31; // stw @ 0x8062B06C
    r31 = r3;
    if (==) goto 0x0x8062b084;
    if (<=) goto 0x0x8062b084;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8062B088
    r0 = *(0x14 + r1); // lwz @ 0x8062B08C
    return;
}