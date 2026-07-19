/* Function at 0x8080AC20, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080AC20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8080AC2C
    *(0xc + r1) = r31; // stw @ 0x8080AC30
    r31 = r3;
    if (==) goto 0x0x8080ac48;
    if (<=) goto 0x0x8080ac48;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8080AC4C
    r0 = *(0x14 + r1); // lwz @ 0x8080AC50
    return;
}