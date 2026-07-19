/* Function at 0x807FA928, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FA928(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807FA934
    r31 = r3;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807FA940
    r3 = r31;
    r4 = r4 + 0; // 0x807FA948
    *(0 + r31) = r4; // stw @ 0x807FA94C
    r31 = *(0xc + r1); // lwz @ 0x807FA950
    r0 = *(0x14 + r1); // lwz @ 0x807FA954
    return;
}