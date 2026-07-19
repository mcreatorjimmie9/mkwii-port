/* Function at 0x808E84E0, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808E84E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808E84E8
    *(0x14 + r1) = r0; // stw @ 0x808E84EC
    *(0xc + r1) = r31; // stw @ 0x808E84F0
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x808E84F8
    r3 = *(0 + r3); // lwz @ 0x808E84FC
    r3 = *(0 + r3); // lwz @ 0x808E8500
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (!=) goto 0x0x808e8518;
    r3 = r31;
    FUN_808B4A48(r3); // bl 0x808B4A48
    r0 = *(0x14 + r1); // lwz @ 0x808E8518
    r31 = *(0xc + r1); // lwz @ 0x808E851C
    return;
}