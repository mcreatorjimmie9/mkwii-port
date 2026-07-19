/* Function at 0x807C79EC, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807C79EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x807C79F8
    *(0xc + r1) = r31; // stw @ 0x807C79FC
    r31 = r3;
    if (==) goto 0x0x807c7a14;
    if (<=) goto 0x0x807c7a14;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x807C7A18
    r0 = *(0x14 + r1); // lwz @ 0x807C7A1C
    return;
}