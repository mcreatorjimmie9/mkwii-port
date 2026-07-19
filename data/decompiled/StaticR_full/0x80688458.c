/* Function at 0x80688458, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80688458(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80688464
    r31 = r3;
    FUN_808CE454(); // bl 0x808CE454
    /* lis r4, 0 */ // 0x80688470
    r3 = r31;
    r4 = r4 + 0; // 0x80688478
    *(0 + r31) = r4; // stw @ 0x8068847C
    r31 = *(0xc + r1); // lwz @ 0x80688480
    r0 = *(0x14 + r1); // lwz @ 0x80688484
    return;
}