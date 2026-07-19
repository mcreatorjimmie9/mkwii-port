/* Function at 0x805ABC5C, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805ABC5C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805ABC6C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805ABC74
    r30 = r3;
    if (==) goto 0x0x805abc98;
    /* li r4, 0 */ // 0x805ABC80
    FUN_805E3430(r4); // bl 0x805E3430
    if (<=) goto 0x0x805abc98;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805ABC9C
    r30 = *(8 + r1); // lwz @ 0x805ABCA0
}