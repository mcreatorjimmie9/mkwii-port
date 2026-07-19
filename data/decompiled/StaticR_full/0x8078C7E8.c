/* Function at 0x8078C7E8, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8078C7E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8078C7F8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8078C800
    r30 = r3;
    if (==) goto 0x0x8078c858;
    r3 = *(0 + r3); // lwz @ 0x8078C80C
    if (==) goto 0x0x8078c820;
    /* li r4, 0 */ // 0x8078C818
    FUN_805E3430(r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8078C820
    /* lfs f0, 0(r3) */ // 0x8078C828
    /* stfs f0, 0x18(r30) */ // 0x8078C82C
    /* stfs f0, 0x34(r30) */ // 0x8078C830
    /* stfs f0, 0x50(r30) */ // 0x8078C834
    /* stfs f0, 0x6c(r30) */ // 0x8078C838
    if (==) goto 0x0x8078c848;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    if (<=) goto 0x0x8078c858;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8078C85C
    r30 = *(8 + r1); // lwz @ 0x8078C860
    r0 = *(0x14 + r1); // lwz @ 0x8078C864
    return;
}