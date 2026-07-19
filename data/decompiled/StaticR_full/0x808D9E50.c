/* Function at 0x808D9E50, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808D9E50(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x808D9E5C
    *(0xc + r1) = r31; // stw @ 0x808D9E60
    r31 = r3;
    if (==) goto 0x0x808d9e78;
    if (<=) goto 0x0x808d9e78;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x808D9E7C
    r0 = *(0x14 + r1); // lwz @ 0x808D9E80
    return;
}