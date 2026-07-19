/* Function at 0x8061CADC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8061CADC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8061CAF0
    r30 = r3;
    r5 = *(0x14 + r3); // lwz @ 0x8061CAF8
    r3 = *(0x14 + r5); // lwz @ 0x8061CAFC
    r3 = *(0 + r3); // lwz @ 0x8061CB00
    r0 = *(0 + r3); // lwz @ 0x8061CB04
    if (!=) goto 0x0x8061cb30;
    /* li r3, 0x360 */ // 0x8061CB10
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8061cb4c;
}