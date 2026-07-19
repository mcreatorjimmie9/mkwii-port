/* Function at 0x807894E0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807894E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807894F0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807894F8
    r30 = r3;
    if (==) goto 0x0x80789518;
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x80789518;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8078951C
    r30 = *(8 + r1); // lwz @ 0x80789520
}