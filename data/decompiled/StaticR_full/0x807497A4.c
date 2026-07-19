/* Function at 0x807497A4, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807497A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807497B4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807497BC
    r30 = r3;
    if (==) goto 0x0x807497f4;
    /* addic. r0, r3, 0xb0 */ // 0x807497C8
    if (==) goto 0x0x807497e4;
    /* lis r4, 0 */ // 0x807497D0
    r4 = r4 + 0; // 0x807497D4
    *(0xb0 + r3) = r4; // stw @ 0x807497D8
    r3 = *(0xc4 + r3); // lwz @ 0x807497DC
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x807497f4;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807497F8
    r30 = *(8 + r1); // lwz @ 0x807497FC
    r0 = *(0x14 + r1); // lwz @ 0x80749800
    return;
}