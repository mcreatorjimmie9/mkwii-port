/* Function at 0x809176C8, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_809176C8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x809176D0
    *(0x14 + r1) = r0; // stw @ 0x809176D4
    r5 = r5 + 0; // 0x809176D8
    *(0xc + r1) = r31; // stw @ 0x809176DC
    r31 = r3;
    FUN_8089F578(r5, r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x809176E8
    /* lis r5, 0 */ // 0x809176EC
    r3 = r3 + 0; // 0x809176F0
    *(0 + r31) = r3; // stw @ 0x809176F4
    r3 = r31;
    r0 = *(0 + r5); // lwz @ 0x809176FC
    *(0xb0 + r31) = r0; // stw @ 0x80917700
    r4 = *(0 + r5); // lwz @ 0x80917704
    r0 = r4 + 1; // 0x80917708
    *(0 + r5) = r0; // stw @ 0x8091770C
    r31 = *(0xc + r1); // lwz @ 0x80917710
    r0 = *(0x14 + r1); // lwz @ 0x80917714
    return;
}