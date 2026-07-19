/* Function at 0x80779BB8, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80779BB8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80779BC8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80779BD0
    r30 = r3;
    if (==) goto 0x0x80779c00;
    /* lis r4, 0 */ // 0x80779BDC
    r4 = r4 + 0; // 0x80779BE0
    *(0 + r3) = r4; // stw @ 0x80779BE4
    r3 = *(0x14 + r3); // lwz @ 0x80779BE8
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80779c00;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80779C04
    r30 = *(8 + r1); // lwz @ 0x80779C08
}