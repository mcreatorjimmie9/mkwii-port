/* Function at 0x80702D20, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80702D20(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r0 = *(4 + r3); // lwz @ 0x80702D2C
    *(0xc + r1) = r31; // stw @ 0x80702D30
    /* li r31, 0 */ // 0x80702D34
    if (==) goto 0x0x80702d60;
    r0 = *(8 + r3); // lwz @ 0x80702D40
    if (==) goto 0x0x80702d60;
    r3 = r3 + 0xc; // 0x80702D4C
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80702d60;
    /* li r31, 1 */ // 0x80702D5C
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80702D64
    r0 = *(0x14 + r1); // lwz @ 0x80702D68
}