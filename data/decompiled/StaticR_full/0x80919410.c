/* Function at 0x80919410, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80919410(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8091941C
    *(0xc + r1) = r31; // stw @ 0x80919420
    r31 = r3;
    if (==) goto 0x0x80919448;
    /* lis r5, 0 */ // 0x8091942C
    r4 = *(0 + r5); // lwz @ 0x80919434
    r0 = r4 + -1; // 0x80919438
    *(0 + r5) = r0; // stw @ 0x8091943C
    if (<=) goto 0x0x80919448;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8091944C
    r0 = *(0x14 + r1); // lwz @ 0x80919450
    return;
}