/* Function at 0x806C9EEC, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806C9EEC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806C9EF8
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806C9F04
    r3 = r31;
    r4 = r4 + 0; // 0x806C9F0C
    *(0 + r31) = r4; // stw @ 0x806C9F10
    r31 = *(0xc + r1); // lwz @ 0x806C9F14
    r0 = *(0x14 + r1); // lwz @ 0x806C9F18
    return;
}