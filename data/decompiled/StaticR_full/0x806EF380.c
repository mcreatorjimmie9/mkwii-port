/* Function at 0x806EF380, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_806EF380(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806EF38C
    /* lis r31, 0 */ // 0x806EF390
    r3 = *(0 + r31); // lwz @ 0x806EF394
    if (==) goto 0x0x806ef3b0;
    /* li r4, 1 */ // 0x806EF3A0
    FUN_806F04E4(r4); // bl 0x806F04E4
    /* li r0, 0 */ // 0x806EF3A8
    *(0 + r31) = r0; // stw @ 0x806EF3AC
    r0 = *(0x14 + r1); // lwz @ 0x806EF3B0
    r31 = *(0xc + r1); // lwz @ 0x806EF3B4
    return;
}