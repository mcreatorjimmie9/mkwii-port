/* Function at 0x809193B4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_809193B4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x809193BC
    *(0x14 + r1) = r0; // stw @ 0x809193C0
    r5 = r5 + 0; // 0x809193C4
    *(0xc + r1) = r31; // stw @ 0x809193C8
    r31 = r3;
    FUN_8089F578(r5, r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x809193D4
    /* lis r5, 0 */ // 0x809193D8
    r3 = r3 + 0; // 0x809193DC
    *(0 + r31) = r3; // stw @ 0x809193E0
    r3 = r31;
    r0 = *(0 + r5); // lwz @ 0x809193E8
    *(0xb0 + r31) = r0; // stw @ 0x809193EC
    r4 = *(0 + r5); // lwz @ 0x809193F0
    r0 = r4 + 1; // 0x809193F4
    *(0 + r5) = r0; // stw @ 0x809193F8
    r31 = *(0xc + r1); // lwz @ 0x809193FC
    r0 = *(0x14 + r1); // lwz @ 0x80919400
    return;
}