/* Function at 0x806C5DE4, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806C5DE4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806C5DF0
    r31 = r3;
    FUN_806497A4(); // bl 0x806497A4
    /* lis r4, 0 */ // 0x806C5DFC
    r3 = r31;
    r4 = r4 + 0; // 0x806C5E04
    *(0 + r31) = r4; // stw @ 0x806C5E08
    r31 = *(0xc + r1); // lwz @ 0x806C5E0C
    r0 = *(0x14 + r1); // lwz @ 0x806C5E10
    return;
}