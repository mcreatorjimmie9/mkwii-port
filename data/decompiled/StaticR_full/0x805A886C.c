/* Function at 0x805A886C, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805A886C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805A887C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805A8884
    r30 = r3;
    if (==) goto 0x0x805a88d0;
    r0 = *(8 + r3); // lwz @ 0x805A8890
    /* lis r4, 0 */ // 0x805A8894
    r4 = r4 + 0; // 0x805A8898
    *(0 + r3) = r4; // stw @ 0x805A889C
    if (==) goto 0x0x805a88b0;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = *(0xc + r30); // lwz @ 0x805A88B0
    if (==) goto 0x0x805a88c0;
    FUN_805E3430(r3); // bl 0x805E3430
    if (<=) goto 0x0x805a88d0;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805A88D4
    r30 = *(8 + r1); // lwz @ 0x805A88D8
    r0 = *(0x14 + r1); // lwz @ 0x805A88DC
    return;
}