/* Function at 0x8064DB0C, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8064DB0C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8064DB1C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8064DB24
    r30 = r3;
    if (==) goto 0x0x8064db50;
    r3 = *(4 + r3); // lwz @ 0x8064DB30
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0 + r30); // lwz @ 0x8064DB38
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x8064db50;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
}