/* Function at 0x8080B72C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080B72C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8080B738
    *(0xc + r1) = r31; // stw @ 0x8080B73C
    r31 = r3;
    if (==) goto 0x0x8080b754;
    if (<=) goto 0x0x8080b754;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8080B758
    r0 = *(0x14 + r1); // lwz @ 0x8080B75C
    return;
}