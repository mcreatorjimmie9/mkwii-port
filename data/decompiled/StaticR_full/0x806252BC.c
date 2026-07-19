/* Function at 0x806252BC, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806252BC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806252C8
    r31 = r3;
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x806252D4
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x806252DC
    r3 = *(0xc + r3); // lwz @ 0x806252E0
    /* lwzx r3, r3, r0 */ // 0x806252E4
    r0 = *(0x20 + r3); // lbz @ 0x806252E8
    *(0x3c + r31) = r0; // stb @ 0x806252EC
    r31 = *(0xc + r1); // lwz @ 0x806252F0
    r0 = *(0x14 + r1); // lwz @ 0x806252F4
    return;
}