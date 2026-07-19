/* Function at 0x80665CC0, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80665CC0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80665CD0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80665CD8
    r30 = r3;
    if (==) goto 0x0x80665d00;
    /* li r4, -1 */ // 0x80665CE4
    r3 = r3 + 4; // 0x80665CE8
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (<=) goto 0x0x80665d00;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80665D04
    r30 = *(8 + r1); // lwz @ 0x80665D08
}