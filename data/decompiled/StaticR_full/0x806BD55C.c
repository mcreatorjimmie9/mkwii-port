/* Function at 0x806BD55C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806BD55C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806BD564
    *(0x14 + r1) = r0; // stw @ 0x806BD568
    *(0xc + r1) = r31; // stw @ 0x806BD56C
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x806BD574
    FUN_806E6508(r4); // bl 0x806E6508
    /* li r0, 1 */ // 0x806BD57C
    *(0xdc0 + r31) = r0; // stb @ 0x806BD580
    r31 = *(0xc + r1); // lwz @ 0x806BD584
    r0 = *(0x14 + r1); // lwz @ 0x806BD588
    return;
}