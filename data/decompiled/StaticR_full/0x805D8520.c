/* Function at 0x805D8520, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_805D8520(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805D8528
    /* lis r3, 0 */ // 0x805D852C
    *(0x14 + r1) = r0; // stw @ 0x805D8530
    /* li r5, 0x2800 */ // 0x805D8534
    /* li r7, 1 */ // 0x805D8538
    *(0xc + r1) = r31; // stw @ 0x805D853C
    r31 = *(0 + r4); // lwz @ 0x805D8540
    r3 = *(0 + r3); // lwz @ 0x805D8544
    r4 = *(0x18 + r31); // lwz @ 0x805D8548
    r6 = *(0x20 + r31); // lwz @ 0x805D854C
    FUN_805BBCDC(); // bl 0x805BBCDC
    /* addis r4, r31, 2 */ // 0x805D8554
    /* li r0, 0 */ // 0x805D8558
    *(0x5000 + r4) = r0; // stb @ 0x805D855C
    *(0x5004 + r4) = r3; // stw @ 0x805D8560
    r0 = *(0x14 + r1); // lwz @ 0x805D8564
    r31 = *(0xc + r1); // lwz @ 0x805D8568
    return;
}