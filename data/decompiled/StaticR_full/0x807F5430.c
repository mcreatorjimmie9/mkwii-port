/* Function at 0x807F5430, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F5430(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x807F5438
    *(0x14 + r1) = r0; // stw @ 0x807F543C
    *(0xc + r1) = r31; // stw @ 0x807F5440
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x807F544C
    /* lis r4, 0 */ // 0x807F5450
    /* lfs f0, 0(r3) */ // 0x807F5454
    r4 = r4 + 0; // 0x807F5458
    *(0 + r31) = r4; // stw @ 0x807F545C
    r3 = r31;
    /* stfs f0, 0xd0(r31) */ // 0x807F5464
    r31 = *(0xc + r1); // lwz @ 0x807F5468
    r0 = *(0x14 + r1); // lwz @ 0x807F546C
    return;
}