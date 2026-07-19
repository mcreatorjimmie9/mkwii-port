/* Function at 0x805F544C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805F544C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805F545C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F5464
    r30 = r3;
    if (==) goto 0x0x805f54a8;
    r0 = *(8 + r3); // lwz @ 0x805F5470
    /* lis r4, 0 */ // 0x805F5474
    r4 = r4 + 0; // 0x805F5478
    *(0 + r3) = r4; // stw @ 0x805F547C
    if (==) goto 0x0x805f5498;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x805F5490
    *(8 + r30) = r0; // stw @ 0x805F5494
    if (<=) goto 0x0x805f54a8;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805F54AC
    r30 = *(8 + r1); // lwz @ 0x805F54B0
    r0 = *(0x14 + r1); // lwz @ 0x805F54B4
}