/* Function at 0x80810228, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80810228(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80810230
    *(0x14 + r1) = r0; // stw @ 0x80810234
    *(0xc + r1) = r31; // stw @ 0x80810238
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x80810244
    r3 = r31;
    r4 = r4 + 0; // 0x8081024C
    *(0 + r31) = r4; // stw @ 0x80810250
    r31 = *(0xc + r1); // lwz @ 0x80810254
    r0 = *(0x14 + r1); // lwz @ 0x80810258
    return;
}