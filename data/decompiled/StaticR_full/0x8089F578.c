/* Function at 0x8089F578, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089F578(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8089F584
    r31 = r3;
    FUN_8089FDB4(); // bl 0x8089FDB4
    /* lis r4, 0 */ // 0x8089F590
    r3 = r31;
    r4 = r4 + 0; // 0x8089F598
    *(0 + r31) = r4; // stw @ 0x8089F59C
    r31 = *(0xc + r1); // lwz @ 0x8089F5A0
    r0 = *(0x14 + r1); // lwz @ 0x8089F5A4
    return;
}