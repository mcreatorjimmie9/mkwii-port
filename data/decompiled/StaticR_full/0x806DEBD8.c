/* Function at 0x806DEBD8, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806DEBD8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806DEBE8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806DEBF0
    r30 = r3;
    if (==) goto 0x0x806dec1c;
    if (==) goto 0x0x806dec0c;
    /* li r4, -1 */ // 0x806DEC00
    r3 = r3 + 0xa8; // 0x806DEC04
    FUN_805E35B8(r4, r3); // bl 0x805E35B8
    if (<=) goto 0x0x806dec1c;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806DEC20
    r30 = *(8 + r1); // lwz @ 0x806DEC24
    r0 = *(0x14 + r1); // lwz @ 0x806DEC28
    return;
}