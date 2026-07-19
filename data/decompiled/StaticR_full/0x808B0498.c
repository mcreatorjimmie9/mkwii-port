/* Function at 0x808B0498, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808B0498(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808B04A8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808B04B0
    r30 = r3;
    if (==) goto 0x0x808b04d4;
    /* li r4, 0 */ // 0x808B04BC
    FUN_808B2750(r4); // bl 0x808B2750
    if (<=) goto 0x0x808b04d4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808B04D8
    r30 = *(8 + r1); // lwz @ 0x808B04DC
    r0 = *(0x14 + r1); // lwz @ 0x808B04E0
    return;
}