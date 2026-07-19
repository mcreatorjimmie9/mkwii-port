/* Function at 0x805A9F94, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805A9F94(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805A9FA4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805A9FAC
    r30 = r3;
    if (==) goto 0x0x805a9fd0;
    /* li r4, 0 */ // 0x805A9FB8
    FUN_805E3430(r4); // bl 0x805E3430
    if (<=) goto 0x0x805a9fd0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805A9FD4
    r30 = *(8 + r1); // lwz @ 0x805A9FD8
}