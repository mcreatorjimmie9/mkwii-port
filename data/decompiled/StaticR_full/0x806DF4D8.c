/* Function at 0x806DF4D8, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806DF4D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806DF4E8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806DF4F0
    r30 = r3;
    if (==) goto 0x0x806df530;
    /* li r4, -1 */ // 0x806DF4FC
    r3 = r3 + 0x78; // 0x806DF500
    FUN_8066D714(r4, r3); // bl 0x8066D714
    r3 = r30 + 0x58; // 0x806DF508
    /* li r4, -1 */ // 0x806DF50C
    FUN_80668158(r4, r3, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806DF518
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806df530;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806DF534
    r30 = *(8 + r1); // lwz @ 0x806DF538
    r0 = *(0x14 + r1); // lwz @ 0x806DF53C
    return;
}