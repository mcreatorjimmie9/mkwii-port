/* Function at 0x808115EC, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808115EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808115F8
    r31 = r3;
    FUN_808A8B3C(); // bl 0x808A8B3C
    /* lis r4, 0 */ // 0x80811604
    r3 = r31;
    r4 = r4 + 0; // 0x8081160C
    *(0 + r31) = r4; // stw @ 0x80811610
    r31 = *(0xc + r1); // lwz @ 0x80811614
    r0 = *(0x14 + r1); // lwz @ 0x80811618
    return;
}