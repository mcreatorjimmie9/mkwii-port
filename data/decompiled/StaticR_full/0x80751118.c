/* Function at 0x80751118, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80751118(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80751124
    *(0xc + r1) = r31; // stw @ 0x80751128
    r31 = r3;
    if (==) goto 0x0x80751140;
    if (<=) goto 0x0x80751140;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80751144
    r0 = *(0x14 + r1); // lwz @ 0x80751148
    return;
}