/* Function at 0x805ACC24, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805ACC24(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805ACC34
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805ACC3C
    r30 = r3;
    if (==) goto 0x0x805acc74;
    /* lis r5, 0 */ // 0x805ACC48
    /* lis r4, 0 */ // 0x805ACC4C
    r5 = r5 + 0; // 0x805ACC50
    *(0 + r3) = r5; // stw @ 0x805ACC54
    r3 = *(0xc + r3); // lwz @ 0x805ACC58
    r4 = r4 + 0; // 0x805ACC5C
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    if (<=) goto 0x0x805acc74;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805ACC78
    r30 = *(8 + r1); // lwz @ 0x805ACC7C
}