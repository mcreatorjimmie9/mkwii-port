/* Function at 0x80778D54, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80778D54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80778D60
    *(0xc + r1) = r31; // stw @ 0x80778D64
    r31 = r3;
    if (==) goto 0x0x80778d7c;
    if (<=) goto 0x0x80778d7c;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80778D80
    r0 = *(0x14 + r1); // lwz @ 0x80778D84
    return;
}