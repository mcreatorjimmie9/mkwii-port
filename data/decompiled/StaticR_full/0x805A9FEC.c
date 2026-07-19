/* Function at 0x805A9FEC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805A9FEC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805A9FFC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805AA004
    r30 = r3;
    if (==) goto 0x0x805aa02c;
    if (==) goto 0x0x805aa01c;
    /* li r4, 0 */ // 0x805AA014
    FUN_805E3430(r4); // bl 0x805E3430
    if (<=) goto 0x0x805aa02c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805AA030
    r30 = *(8 + r1); // lwz @ 0x805AA034
    r0 = *(0x14 + r1); // lwz @ 0x805AA038
    return;
}