/* Function at 0x80626C08, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80626C08(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80626C14
    *(0xc + r1) = r31; // stw @ 0x80626C18
    r31 = r3;
    if (==) goto 0x0x80626c30;
    if (<=) goto 0x0x80626c30;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80626C34
    r0 = *(0x14 + r1); // lwz @ 0x80626C38
    return;
}