/* Function at 0x807879C4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807879C4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807879D4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807879DC
    r30 = r3;
    if (==) goto 0x0x807879fc;
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x807879fc;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80787A00
    r30 = *(8 + r1); // lwz @ 0x80787A04
}