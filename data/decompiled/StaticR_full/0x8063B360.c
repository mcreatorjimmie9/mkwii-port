/* Function at 0x8063B360, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8063B360(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8063B370
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8063B378
    r30 = r3;
    if (==) goto 0x0x8063b3a0;
    if (==) goto 0x0x8063b390;
    /* li r4, 0 */ // 0x8063B388
    FUN_805F1DDC(r4); // bl 0x805F1DDC
    if (<=) goto 0x0x8063b3a0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8063B3A4
    r30 = *(8 + r1); // lwz @ 0x8063B3A8
    r0 = *(0x14 + r1); // lwz @ 0x8063B3AC
    return;
}