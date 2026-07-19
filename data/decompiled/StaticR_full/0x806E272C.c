/* Function at 0x806E272C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E272C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806E2738
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806E2744
    r3 = r31;
    r4 = r4 + 0; // 0x806E274C
    *(0 + r31) = r4; // stw @ 0x806E2750
    r31 = *(0xc + r1); // lwz @ 0x806E2754
    r0 = *(0x14 + r1); // lwz @ 0x806E2758
    return;
}