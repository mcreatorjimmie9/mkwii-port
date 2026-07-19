/* Function at 0x8089F5F0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089F5F0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8089F5FC
    r31 = r3;
    FUN_808A0090(); // bl 0x808A0090
    /* lis r4, 0 */ // 0x8089F608
    r3 = r31;
    r4 = r4 + 0; // 0x8089F610
    *(0 + r31) = r4; // stw @ 0x8089F614
    r31 = *(0xc + r1); // lwz @ 0x8089F618
    r0 = *(0x14 + r1); // lwz @ 0x8089F61C
    return;
}